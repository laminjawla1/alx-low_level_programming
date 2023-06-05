/**
*_strlen_recursion - Count the length of
*string s, recursively
*@s: String to be counted
*Return: Length of the string
*/
int _strlen_recursion(char *s)
{
	if (!*s)
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
