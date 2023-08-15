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
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n");
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
	elf_header_printer(elf_header);
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
bool elf_identification(u_chr e_ident[EI_NIDENT])
{
	int i;

	for (i = 0; i < 4; i++)
		if (e_ident[i] != 'E' && e_ident[i] != 'F' &&
			e_ident[i] != 'L' && e_ident[i] != 127)
			return (false);
	return (true);
}
/**
* elf_header_printer - Prints an elf file header
*
*@elf_header: Header of an elf file
*
*Return: void
*/
void elf_header_printer(Elf64_Ehdr *elf_header)
{
	print_elf_magic_numbers(elf_header->e_ident);
	print_elf_class(elf_header->e_ident);
	print_elf_header_data(elf_header->e_ident);
	print_elf_version(elf_header->e_ident);
	print_elf_osabi(elf_header->e_ident);
	print_elf_abi_version(elf_header->e_ident);
	print_elf_type(elf_header->e_type, elf_header->e_ident);
	print_elf_entry(elf_header->e_entry, elf_header->e_ident);
}
/**
* print_elf_magic_numbers - Prints the magic numbers in header of the elf
*
*@e_ident: Elf magic numbers
*
*Return: None
*/
void print_elf_magic_numbers(u_chr e_ident[EI_NIDENT])
{
	int i;

	printf("ELF Header:\n");
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
void print_elf_class(u_chr e_ident[EI_NIDENT])
{
	printf("Class: ");
	switch (e_ident[EI_CLASS])
	{
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		case ELFDATANONE:
			printf("none\n");
			break;
		default:
			printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}
/**
* print_elf_header_data - Prints the data in the header of the given elf file
*
*@e_ident: An elf file header;
*
*Return: void
*/
void print_elf_header_data(u_chr e_ident[EI_NIDENT])
{
	printf("Data: ");
	switch (e_ident[EI_DATA])
	{
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
		case ELFDATANONE:
			printf("none\n");
			break;
		default:
			printf("<unknown> %x>\n", e_ident[EI_CLASS]);
	}
}
/**
* print_elf_version - Prints the version of header of the elf file
*
*@e_ident: Elf header
*
*Return: void
*/
void print_elf_version(u_chr e_ident[EI_NIDENT])
{
	(e_ident[EI_VERSION] == EV_CURRENT) ? printf("Version: %d (current)\n",
		e_ident[EI_VERSION]) : printf("Version: \n");
}
/**
* print_elf_osabi - Prints the OS/ABI of an elf file header
*
*@e_ident: An elf file header
*
*Return: None
*/
void print_elf_osabi(u_chr e_ident[EI_NIDENT])
{
	printf("OS/ABI: ");

	switch (e_ident[EI_OSABI])
	{
		case ELFOSABI_ARM:
			printf("ARM\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD\n");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX\n");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX\n");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux\n");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone App\n");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX - TRU64\n");
			break;
		case ELFOSABI_NONE:
			printf("UNIX - System V\n");
			break;
		default:
			printf("<unknown: %x>\n", e_ident[EI_OSABI]);
	}

}
/**
* print_elf_abi_version - Prints the version of elf abi
*
*@e_ident: Elf header
*
*Return: void
*/
void print_elf_abi_version(u_chr e_ident[EI_NIDENT])
{
	printf("ABI Version: %d\n", e_ident[EI_ABIVERSION]);
}
/**
* print_elf_type - Prints the type of an elf header file
*
* @e_type: Type of the elf header
* @e_ident: Elf identifier
*
* Return: None
*/
void print_elf_type(unsigned int e_type, u_chr *e_ident)
{
	printf("Type: ");
	if (e_ident[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;
	switch (e_type)
	{
		case ET_CORE:
			printf("CORE (Core file)\n");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)\n");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)\n");
			break;
		case ET_NONE:
			printf("NONE (None)\n");
			break;
		case ET_REL:
			printf("REL (Relocatable file)\n");
			break;
		default:
			printf("<unknown : %x>\n", e_type);
	}
}
/**
* print_elf_entry - Prints an entry point of the header of an elf file
*
*@e_entry: Entry point
*@e_ident: Elf id
*
*/
void print_elf_entry(u_lint e_entry, u_chr *e_ident)
{
	printf("Entry point address: ");
	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) |
			((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}
	if (e_ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)e_entry);
	else
		printf("%#lx\n", e_entry);
}
