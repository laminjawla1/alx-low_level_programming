/**
*prime - recursively checks if a number is prime
*@n: Number to be computed
*@i: Flag
*Return: True or False
*/
int prime(int n, int i)
{
	if (i == 1)
		return (i);
	if (!(n % i) && i > 0)
		return (0);
	return (prime(n, i - 1));
}
/**
*is_prime_number - checks if a number is prime
*@n: Number to be computed
*Return: True or False
*/
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime(n, n / 2));
}
