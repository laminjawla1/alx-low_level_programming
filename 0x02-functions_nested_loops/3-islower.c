#include "main.h"

/**
*_islower - checks if a char is lower
*@parameterc: the character to be checked
*
*Return: 1 if parameter is lower
*0 otherwies
*/

int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
