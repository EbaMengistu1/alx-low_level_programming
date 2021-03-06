#include "holberton.h"
#include <stdlib.h>
/**
* *_strdup - Entry point
* Description - A function that returns a pointer
* to a newly allocated space in memory
* *@str: the function accepts an input saved into str
* Return: Success (0)
*/
char *_strdup(char *str)
{
	char *a;
	int i, c;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		;
	}

	a = malloc(i * sizeof(*a) + 1);

	if (a == NULL)
	{
		return (NULL);
	}

	for (c = 0; c < i; c++)
	{
		a[c] = str[c];
	}

	a[c] = '\0';

	return (a);
}
