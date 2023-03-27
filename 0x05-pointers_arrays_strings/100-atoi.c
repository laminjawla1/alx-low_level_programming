#include <ctype.h>
#include <string.h>

int _atoi(char *s)
{
	int n, sign;

	while (isspace(*s))
		s++;	/* get rid of white spaces */

	if (isdigit(*s))
	{
		return (calc(s));
	}
	if (*s == '+' || *s == '-')
	{
		if (isdigit(*(s + 1)))
		{
			sign = (*s == '-') ? -1 : 1;
			return (calc(s) * sign);
		}
		else
		{
			while (!isdigit(*s))
				s++;
			for (n = 0; isdigit(*s); s++)
				n = 10 * n + (*s - '0');
			return (n);
		}
	}
	if (*s == '+' || *s == '-')
	{
		while (!isdigit(*s))
			s++;
		if (*(s - 1) == '+' || *(s - 1) == '-')
		{
			sign = (*(s - 1) == '-') ? -1 : 1;
			for (n = 0; *s; s++)
				if (isdigit(*s))
					n = 10 * n + (*s - '0');
				else
					return (n);
			return (n * sign);
		}
	}
	else
	{
		while (!isdigit(*s))
			s++;
		for (n = 0; isdigit(*s); s++)
			n = 10 * n + (*s - '0');
		return (n);
	}
	return (0);
}
