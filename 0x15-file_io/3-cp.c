#include "main.h"
/**
*main - A program that copies one file content to the other
*@argc: Aargument count
*@argv: Argument vector
*Return: 0 on success
*/
int main(int argc, char *argv[]__attribute__((unused)))
{
	int file_from, file_to;
	char *buffer;

	if (argc != 3)
	{
		fprintf(stderr, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		fprintf(stderr, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_to = open(argv[2], O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (file_to == -1)
	{
		fprintf(stderr, "Error: can't write to file %s\n", argv[2]);
		exit(99);
	}
	buffer = malloc(sizeof(char) * 1024);
	if (!buffer)
	{
		fprintf(stderr, "Error: can't allocate a buffer\n");
		exit(100);
	}
	while ((read(file_from, buffer, BUFF_SIZE)) > 0)
		dprintf(file_to, "%s", buffer);
	free(buffer);
	if (!close(file_from))
	{
		fprintf(stderr, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	if (!close(file_to))
	{
		fprintf(stderr, "Error: can't close fd %d\n", file_to);
		exit(100);
	}
	return (0);
}
