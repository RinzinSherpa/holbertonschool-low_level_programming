#include "holberton.h"
/**
 * print_line - function that draws a straight line in terminal
 * @n: parameter is n
 */

void print_diagonal(int n)
{
	int z, x;

	if (n > 0)
	{
		for (x = 0; x < n; x++)
		{
			for (z = 0; z < x; z++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		}
	_putchar('\n');
	}
	_putchar('\n');
}
