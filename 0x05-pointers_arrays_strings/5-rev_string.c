#include <string.h>
/**
*rev_string - reverses a string
*@s: string to be reversed
*Return: void
*/
void rev_string(char *s)
{
	int i, j, len, t;

	len = strlen(s);
	for (i = 0, j = len; i < j / 2; i++)
	{
		t = s[i];
		s[i] = s[j - i - 1];
		s[j - i - 1] = t;
	}
}
