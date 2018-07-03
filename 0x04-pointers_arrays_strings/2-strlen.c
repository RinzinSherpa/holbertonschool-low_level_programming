#include "holberton.h"
/**
 *_strlen - function that returns the length of a string
 *@s: parmeter is s
 *Return: return an integer value
 */

int _strlen(char *s)
{
	int counting = 0;

	while (*s != '\0')
	{
		s++;
		counting++;
	}
	return (counting);
}
