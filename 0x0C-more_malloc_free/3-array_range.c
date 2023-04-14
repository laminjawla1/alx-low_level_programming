#include <stdlib.h>
/**
*array_range - sets values between min and max to an array
*@min: min
*@max: max
*Return: pointer to array
*/
int *array_range(int min, int max)
{
	int nmemb, *a, i, j = 0;

	if (min > max)
		return (NULL);
	nmemb = max - min;
	a = malloc((nmemb + 1) * sizeof(int));
	if (!a)
		return (NULL);
	for (i = min; i <= max; i++, j++)
		*(a + j) = i;
	return (a);
}
