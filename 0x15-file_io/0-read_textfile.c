#include "main.h"

/**
*read_textfile - reads the content of a file and prints it
*
*@filename: Arg1
*@letters: Letters
*
*Return: letters if success else -1 if file can't be opened
*of read. 0 if filename is NULL;
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fildes, cnt, bytes;
	char *buffer;

	if (!filename)
		return (0);
	if ((fildes = open(filename, O_RDONLY)) == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);

	bytes = read(fildes, buffer, letters);
	cnt = write(STDOUT_FILENO, buffer, bytes);

	free(buffer);
	close(fildes);
	return (cnt);
}
