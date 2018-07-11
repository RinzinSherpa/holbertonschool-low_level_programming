#include "holberton.h"
/**
 * _puts_recursion - function that prints a string, followed by a new line
 * @s: it is the pointer with variable s of type char
 * Return: return is void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		_putchar (*s);
		_puts_recursion(s + 1);
	}
}
