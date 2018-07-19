#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *_strdup - function is a pointer of data type char
 *@str: input parameter is a string of type char
 * Return: return value of the output is of type char
 */
char *_strdup(char *str)
{
	int i;
	char *cptr;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		;
	}
	cptr = malloc(sizeof(char) * i + 1);
	if (cptr == NULL)
	{
		return (NULL);
	}
	
	for (i = 0; str[i] != '\0'; i++)
	{
		cptr[i] = str[i];
	}
	return (cptr);
}

