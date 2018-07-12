#include "holberton.h"
/**
 * _print_rev_recursion - function that prints a string in reverse
 * @s: it is the pointer with variable s of type char
 * Return: return is void
 */
void _print_rev_recursion(char *s)
{

	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar (*s);
	}
}
