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
	/*Variable Declaration*/
	Elf64_Ehdr *elf_header;
	int sample_elf_file, value_after_read;

	/*Checking for the right number comman-line arguments*/
	if (argc != 2)
	{
		printf("Usage: elf_header elf_filename\n");
		exit(98);
	}

	/*Open the file*/
	sample_elf_file = open(argv[1], O_RDONLY);
	/*Checking if opening was successful*/
	if (sample_elf_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't open file <%s>\n", argv[1]);
		exit(98);
	}
	/*Allocate sum chunk of bytes for the elf_header*/
	elf_header = malloc(sizeof(Elf64_Ehdr));
	/*Check if the allocation was successful*/
	if (!elf_header)
	{
		_close(sample_elf_file);
		dprintf(STDERR_FILENO, "Error: Insufficient memory\n");
		exit(98);
	}

	/*Read the contents of the sample elf file*/
	value_after_read = read(sample_elf_file, elf_header, sizeof(Elf64_Ehdr));
	/*Check the value returned by read. -1 means an error occured*/
	if (value_after_read == -1)
	{
		free(elf_header);
		_close(sample_elf_file);
		dprintf(STDERR_FILENO, "Error: Can't read from file <%s>\n", argv[1]);
		exit(98);
	}
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
