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
*append_text_to_file - appends a text to a file
*@filename: File
*@text_content: Content
*Return: 1 on success
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fildes, bytes = 0, cnt;

	if (!filename)
		return (-1);
	if (text_content)
		bytes = get_total_bytes(text_content);

	fildes = open(filename, O_APPEND | O_WRONLY);
	if (fildes == -1)
		return (-1);
	cnt = write(fildes, text_content, bytes);
	if (cnt == -1)
		return (-1);
	close(fildes);
	return (1);
}
