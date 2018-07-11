#include "holberton.h"
#include <stdio.h>
/**
 * *_strchr - function that locates a character in a string
 * @s: input is the pointer with variable s of type char
 * @c: c is the input variable of type char
 * Return: return value of the output is of type char
 */
char *_strchr(char *s, char c)
{

	int i;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		
	if (c == '\0')
		{
			return (s + i);
		}
	}
	return (0);

}
