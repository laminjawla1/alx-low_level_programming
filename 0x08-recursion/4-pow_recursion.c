/**
*_pow_recursion - Recursively calculate x ^ y
*@x:  Base
*@y: Power
*Return: Result of x ^ y
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y < 1)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
