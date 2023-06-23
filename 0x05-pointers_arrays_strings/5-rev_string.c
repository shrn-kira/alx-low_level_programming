#include "main.h"

/**
 * rev_string - a function that reverses a string.
 * @s: pointer to string.
 * Return: void
 */
void rev_string(char *s)
{
	int i, m, u, temp;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	u = 0;
	m = i - 1;

	while (u < m)
	{
		temp = s[u];
		s[u] = s[m];
		s[m] = temp;
		u++;
		m--;
	}
}
