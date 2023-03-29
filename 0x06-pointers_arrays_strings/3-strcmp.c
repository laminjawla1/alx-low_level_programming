/**
*_strcmp - compares s1 to s2
*@s1: first string param
*@s2: Second string param
*Return: 0 if s1 == s1, -15 if s1 < s1, 15 if s1 > s2
*/
int _strcmp(char *s1, char *s2)
{
	int i, n, cnt;

	n = 0;
	i = 0;
	while (s1[i])
	{
		n++;
		i++;
	}
	cnt = 0;
	for (i = 0; i < n; i++)
		if (s1[i] == s2[i])
			cnt++;
	if (cnt == n)
		return (0);
	else if (s1[0] < s2[0])
		return (-15);
	else
		return (15);
}
