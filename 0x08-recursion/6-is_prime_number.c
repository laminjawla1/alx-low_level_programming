/**
*is_prime_number - Recursively checks if a number is prime
*@n: Number to be computed
*Return: True or False
*/
int is_prime_number(int n)
{
	static int i = 2;

	if (n <= 1)
		return (0);
	if (!(n % i))
		return (0);
	if (i * i > n)
		return (1);
	i++;
	return (is_prime_number(n));
}
