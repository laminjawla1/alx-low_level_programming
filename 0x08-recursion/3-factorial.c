/**
*factorial - Recursively finds the factorial a number
*@n: arg
*Return: n!
*/
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n < 1)
		return (1);
	return (n * factorial(n - 1));
}
