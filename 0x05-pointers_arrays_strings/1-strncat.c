#include "holberton.h"
/**
 *_strncat - function that concatenates two strings
 *@dest: parameter is *dest of type char
 *@src: parameter is *src of type char
 *@i: paramet is n of type integer
 *Returns - returns the output of type char
 */

char *_strncat(char *dest, char *src, int n)
{
	int length;
	int s2;

	for (length = 0; dest[length] != '\0'; length++)
	{
		;
	}
	for (s2 =0 ; src[s2] != '\0' && s2 < n; s2++)
	{
		dest[length + s2] = src[s2];
	}
	dest[length + s2] = '\0';
	return (dest);
}
