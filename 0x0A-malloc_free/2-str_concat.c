#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *str_concat - function is a pointer of data type char
 *@s1: input parameter is a pointer of type char
 *@s2: input parameter is a pointer of type char
 *Return: return value of the output is a pointer of type char
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, x, y;
	char *cptr;

	if (s1 == NULL)
	{
		return (NULL);
	}
	if (s2 == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
		;
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		;
	}
	cptr = malloc(sizeof(char) * (i + j + 1));

	if (cptr == NULL)
	{
		return (NULL);
	}

	for (x = 0; s1[x] != '\0'; x++)
	{
		cptr[x] = s1[x];
	}

	for (y = 0; s2[y] != '\0'; y++, x++)
	{
		cptr[x] = s2[y];
	}
	cptr[x] = '\0';
	return (cptr);
}
