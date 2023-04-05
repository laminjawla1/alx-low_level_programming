/**
*is_prime_number - Recursively checks if a number is prime
*@n: Number to be computed
*Return: True or False
*/
int is_prime_number(int n)
{
	int i = 2;

	if (n <= 1)
		return (0);
	if (n == 2)
		return (1);

	while (i * i <= n)
	{
		if (!(n % i))
			return (0);
		i++;
	}
	return (1);
}
