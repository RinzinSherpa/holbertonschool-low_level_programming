#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 **_calloc - function is a pointer that allocates memory
 *@nmemb: nmemb is input parameter of type unsigned int
 *@size: size is input parameter of type unsigned int
 *Return: output value is a void  pointer
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{

	void *ptr;
	char *cptr;
	unsigned int x;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(sizeof(char) * (nmemb * size));
	if (ptr == NULL)
	{
		return (NULL);
	}
	cptr = ptr;
	for (x = 0; x < nmemb * size; x++)
	{
		cptr[x] = 0;
	}
	return (ptr);
}
