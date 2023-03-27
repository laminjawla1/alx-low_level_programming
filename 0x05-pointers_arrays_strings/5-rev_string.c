#include <string.h>
/**
*rev_string - reverses a string
*@s: string to be reversed
*Return: void
*/
void rev_string(char *s)
{
	int i, j, len, t;

	len = strlen(s) - 1;
	for (i = 0, j = len; i < j / 2; i++)
	{
		t = s[i];
		s[i] = s[j - i];
		s[j - i] = t;
	}
}
