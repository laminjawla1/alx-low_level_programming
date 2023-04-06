/**
*_strlen - finds the length of a string
*@s: The string
*Return: The length of a string
*/
int _strlen(char *s)
{
	if (!*s)
		return (0);
	return (1 + _strlen(s + 1));
}
/**
*palindrome - recursively checks if a string is palindrome
*@str: The string
*@i: iterator
*@len: Length of the string
*Return: True or False
*/
int palindrome(char *str, int i, int len)
{
	if (*(str + i) != *(str + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (palindrome(str, i + 1, len - 1));
}
/**
*is_palindrome - checks if a str is palindrome
*@s: The string
*Return: True of False
*/
int is_palindrome(char *s)
{
	if (!*s)
		return (1);
	return (palindrome(s, 0, _strlen(s)));
}
