#include "holberton.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates bytes of s2 to s1
 * @s1: string 1
 * @s2: string 2
 * @n: no of bytes of s2 to be concatenated
 * Return: concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, j, len = _strlen(s1);

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	str = malloc((len + n + 1) * sizeof(char));

	if (str == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		str[i] = s1[i];
	for (j = 0; j < n; j++)
	{
		str[i + j] = s2[j];
	}
	str[i + j] = '\0';
	return (str);
}
/**
 * _strlen - gets string length
 * @s: pointer to string
 * Return: string length
 */

int _strlen(char *s)
{
	if (!*s)
		return (0);
	return (1 + _strlen(s + 1));
}
