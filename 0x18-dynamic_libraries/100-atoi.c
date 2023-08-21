#include <ctype.h>
#include <string.h>
#include <string.h>
/**
*_atoi - converts a string to an int
*@s: the string to be converted
*Return: an integer
*/
int _atoi(char *s)
{
	int len, i, d, n, f, digit;

	i = 0;
	d = 0;
	n = 0;
	f = 0;
	len = strlen(s);
	digit = 0;


	while (i < len && f == 0)
	{
		if (s[i] == '-')
			++d;

		if (isdigit(s[i]))
		{
			digit = s[i] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (!isdigit(s[i + 1]))
				break;
			f = 0;
		}
		i++;
	}

	if (f == 0)
		return (0);

	return (n);
}

