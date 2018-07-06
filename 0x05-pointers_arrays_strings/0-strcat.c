#include "holberton.h"
/**
 *_strcat - function that concatenates two strings
 *@dest: parameter is *dest of type char
 *@src: parameter is *src of type char
 *Returns - returns the output of type char
 */

char *_strcat(char *dest, char *src)
{

	int s2;
	int length;

	for (length = 0; dest[length] != '\0'; length++)
	{
		;
	}
	for (s2 = 0; src[s2] != '\0'; s2++)
	{
		dest[length + s2] = src[s2];
	}
	dest[length + s2] = '\0';
	return (dest);
}
