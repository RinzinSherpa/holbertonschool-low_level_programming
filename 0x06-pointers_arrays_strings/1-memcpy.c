#include "holberton.h"
/**
 * *_memcpy - function that copies memory area
 * @dest: it is the pointer with variable dest of type char
 * @src: is the input variable of type char
 * @n: n is the variable of type int
 * Return: return value of the output is of type char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
