#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *create_array -creates array of chars, initializes with specific char
 *@size: the input parameter is unsigned int size of type int
 *@c:the input parameter is of varaiable c of type char
 *Return: the return value of the output is a pointer pointing to char
 */
char *create_array(unsigned int size, char c)
{

	unsigned int i;
	char *iptr;

	iptr = malloc(sizeof(char) * size);


	for (i = 0; i < size; i++)
	{
		iptr[i] = c;
		if (size == 0)
		{
			return (NULL);
		}
	}
	return (iptr);
}

