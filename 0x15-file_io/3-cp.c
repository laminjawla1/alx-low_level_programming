#include "main.h"
/**
*create_buffer - creates a one kilobyte buffer
*@file: File
*Return: buffer on success
*/
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	if (!buffer)
	{
		dprintf(STDERR_FILENO, "Error: can't write to file %s\n", file);
		exit(100);
	}
	return (buffer);
}
/**
*_close - closes a file
*@fildes: File Descriptor
*/
void _close(int fildes)
{
	if (close(fildes))
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", fildes);
		exit(100);
	}
}
/**
*main - A program that copies one file content to the other
*@argc: Aargument count
*@argv: Argument vector
*Return: 0 on success
*/
int main(int argc, char *argv[]__attribute__((unused)))
{
	int file_from, file_to, bytes;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_to = open(argv[2], O_CREAT | O_RDWR | O_TRUNC, 0664);
	buffer = create_buffer(argv[2]);
	while ((bytes = read(file_from, buffer, BUFF_SIZE)) > 0)
	{
		if (bytes == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(99);
		}
		bytes = write(file_to, buffer, bytes);
		if (bytes == -1 || file_to == -1)
		{
			dprintf(STDERR_FILENO, "Error: can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
	}
	free(buffer);
	_close(file_from);
	_close(file_to);
	return (0);
}