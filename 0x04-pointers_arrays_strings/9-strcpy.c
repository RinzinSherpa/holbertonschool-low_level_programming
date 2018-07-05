#include "holberton.h"
/**
 * _strcpy - function copies the string
 * @dest: dest is the pointer of type char
 * @src: src is the parameter of type char
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
