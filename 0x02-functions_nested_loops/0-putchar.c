#include "main.h"
#include <string.h>

/**
*main - print the contents of the text
*variable a character after other
*using the Holberton School
*custom  _putchar function
* Return: On success 0.
*/

int main(void)
{
	size_t i;
	char *text;

	text = "_putchar";
	for (i = 0; i < strlen(text); i++)
	{
		_putchar(text[i]);
	}
	_putchar('\n');
	return (0);
}
