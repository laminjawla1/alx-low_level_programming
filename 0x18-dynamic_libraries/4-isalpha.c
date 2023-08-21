#include "main.h"
/**
*_isalpha - checks if a char is alpha
*@c: the character to be tested
*Return: 1 if true
*Otherwise 0
*/

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
