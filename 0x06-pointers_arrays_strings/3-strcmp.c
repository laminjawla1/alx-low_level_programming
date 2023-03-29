/**
*_strcmp - compares s1 to s2
*@s1: first string param
*@s2: Second string param
*Return: 0 if s1 == s1, negative num if s1 < s1, 
*positive if s1 > s2
*/
int _strcmp(char *s1, char *s2)
{
	while (*s1)
	{
		if (*s1 != *s2)
			break;
		s1++;
		s2++;
	}
	return (*(const unsigned char *) s1 - *(const unsigned char *) s2);
}
