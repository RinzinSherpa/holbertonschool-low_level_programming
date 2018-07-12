#include "holberton.h"
/**
 * _strlen_recursion - function that returns the length of a string
 * @s: it is the pointer with variable s of type char
 * Return: the return value of the output is of type int
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
	{
		return (0);
	}
}
