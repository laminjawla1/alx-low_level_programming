/**
*_sqrt - Recursively compute the sqrt of a number
*@n: The number
*@i: square
*Return: The sqrt of a number
*/
int _sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt(n, i + 1));
}
/**
*_sqrt_recursion - checks if a number has a natural root
*@n: The number
*Return: sqrt of a number
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt(n, 0));
}
