#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *string_nconcat - function that concatenates the string
 *@s1: s1 is input parameter pointer of type char
 *@s2: s2 is input parameter pointer of type char
 *@n : n is the input parameter of unsigned int
 *Return: output value is a pointer of type char
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *cptr;
	int x, y, p;
	unsigned int z;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (x = 0; s1[x] != '\0'; x++)
	{
		;
	}

	for (y = 0; s2[y] != '\0'; y++)
	{
		;
	}

	cptr = malloc(sizeof(char) * (x + n + 1));

	if (cptr == NULL)
	{
		return (NULL);
	}

	for (p = 0; s1[p] != '\0'; p++)
	{
		cptr[p] = s1[p];
	}

	for (z = 0; z < n; z++, p++)
	{
		cptr[p] = s2[z];
	}

	cptr[p] = '\0';
	return (cptr);
}






