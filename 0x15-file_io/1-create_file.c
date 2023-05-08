#include "main.h"
/**
*get_total_bytes - get the total of bytes in a string
*@s: String
*Return: bytes
*/
size_t get_total_bytes(char *s)
{
	size_t bytes;

	for (bytes = 0; s[bytes]; bytes++)
		;
	return (bytes);
}
/**
*create_file - creates a file
*@filename: Filename
*@text_content: Content
*Return: 1 on success else -1
*/
int create_file(const char *filename, char *text_content)
{
	size_t bytes = 0;
	ssize_t cnt, fildes;

	if (!filename)
		return (-1);

	if (text_content)
		bytes = get_total_bytes(text_content);
	fildes = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	cnt = write(fildes, text_content, bytes);

	if (cnt == -1 || fildes == -1)
		return (-1);
	close(fildes);
	return (1);
}
