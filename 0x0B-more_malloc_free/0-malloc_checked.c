#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *malloc_checked - function is a pointer to a void
 *@b: input parameter is of type unsigned int
 *Return: returns void
 */

void *malloc_checked(unsigned int b)
{

	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
