#include "holberton.h"
/**
 * _strncpy - function copies the string
 * @dest: dest is the pointer of type char
 * @src: src is the pointer of type char
 * @n: n is the variable of type integer
 * Return:the return value is a character
 */
char *_strncpy(char *dest, char *src, int n)
{

	int length;

	for (length = 0; length < n && src[length] != '\0'; length++)
	{
		dest[length] = src[length];
	}
	for (; src[length] <= n; length++)
	{
		dest[length] = '\0';
	}
	return (dest);
}

