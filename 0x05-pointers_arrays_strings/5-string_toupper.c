#include "holberton.h"
/**
 * *string_toupper - function that reverses the content of an array of integers
 * @s: s is the pointer of type char
 * Return: return output value is of type char
 */
char *string_toupper(char *s)
{

	int start;

	for (start = 0; s[start] != '\0'; start++)
	{
		if (s[start] >= 'a' && s[start] <= 'z')
		{
			s[start] = s[start] - 32;
		}
	}
	return (s);
}
