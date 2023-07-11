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
	int sample_elf_file;

	if (argc != 2)
	{
		printf("Usage: elf_header elf_filename\n");
		exit(98);
	}

	sample_elf_file = open(argv[1], O_RDONLY);
	if (sample_elf_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file <%s>\n", argv[1]);
		exit(98);
	}
	return (0);
}
