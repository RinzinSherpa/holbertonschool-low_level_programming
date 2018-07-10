#include "holberton.h"
/**
 * *_memset - function that fills memory with a constant byte
 * @*s: it is the pointer with variable s of type int
 * @b: b is the input variable of type char
 * @n: n is the variable of type int
 * Return: return value of the output is of type char
 */
char *_memset(char *s, char b, unsigned int n)
{

	unsigned int i;

	for (i = 0; i <= n; i++)
	{
		s[i] = b;
	}
	return (s);
}
