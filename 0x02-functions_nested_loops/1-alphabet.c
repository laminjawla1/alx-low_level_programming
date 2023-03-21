#include "main.h"

/**
*print_alphabet - prints the alphabet
*in reverse order
*Return: 0
*/

void print_alphabet(void)
{
	char c;

        for (c = 'z'; c >= 'a'; c--)
        {
        	_putchar(c);
        }
        _putchar('\n');
}

