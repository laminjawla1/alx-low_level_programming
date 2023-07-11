#include "main.h"

/**
* main - Entry point
*
*@argc: Argument count
*@argv: Argument vector
*
*Return: 0 on success
*/
int main(int argc, char *argv[])
{
	Elf64_Ehdr *elf_header;
	int sample_elf_file, value_after_read;

	if (argc != 2)
	{
		printf("Usage: elf_header elf_filename\n");
		exit(98);
	}
	sample_elf_file = open(argv[1], O_RDONLY);
	if (sample_elf_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't open file <%s>\n", argv[1]);
		exit(98);
	}
	elf_header = malloc(sizeof(Elf64_Ehdr));
	if (!elf_header)
	{
		_close(sample_elf_file);
		dprintf(STDERR_FILENO, "Error: Insufficient memory\n");
		exit(98);
	}
	value_after_read = read(sample_elf_file, elf_header, sizeof(Elf64_Ehdr));
	if (value_after_read == -1)
	{
		free(elf_header);
		_close(sample_elf_file);
		dprintf(STDERR_FILENO, "Error: Can't read from file <%s>\n", argv[1]);
		exit(98);
	}
	if (!(elf_identification(elf_header->e_ident)))
	{
		dprintf(STDERR_FILENO, "Error: <%s> is not a valid elf file\n", argv[1]);
		exit(98);
	}
	printf("ELF Header:\n");
	print_elf_magic_numbers(elf_header->e_ident);
	print_elf_class(elf_header->e_ident);
	free(elf_header);
	_close(sample_elf_file);
	return (0);
}
/**
* _close - Closes an elf file
*
*@sample_elf_file: File to closed
*
*Return: None
*/
void _close(int sample_elf_file)
{
	/*Try closing the file, if an error is enxountered, exit with code <98>*/
	if ((close(sample_elf_file)) == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Unable to close the file with a descriptor of <%d>\n",
			sample_elf_file);
		exit(98);
	}
}
/**
* elf_identification - Identifies the sample elf file as valid or invalid
*
*@e_ident: An array of the elf magic numbers
*
*Return: true or false
*/
bool elf_identification(unsigned char *e_ident)
{
	int i;

	for (i = 0; i < 4; i++)
		if (e_ident[i] != 'E' && e_ident[i] != 'F' &&
			e_ident[i] != 'L' && e_ident[i] != 127)
			return (false);
	return (true);
}
/**
* print_elf_magic_numbers - Prints the magic numbers in header of the elf
*
*@e_ident: Elf magic numbers
*
*Return: None
*/
void print_elf_magic_numbers(unsigned char *e_ident)
{
	int i;

	printf("Magic: ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		if (i == EI_NIDENT - 1)
			printf("%02x\n", e_ident[i]);
		else
			printf("%02x ", e_ident[i]);
	}
}
/**
* print_elf_class - Prints the class of an elf file
*
*@e_ident: An elf file header
*
*Return: None
*/
void print_elf_class(unsigned char *e_ident)
{
	puts("Class: ");
	switch(e_ident[EI_CLASS])
	{
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		case ELFNOCLASS:
			printf("none\n");
			break;
		default:
			printf("<unknown: %x>\n", e_ident[EI_CLASS])
	}
}
