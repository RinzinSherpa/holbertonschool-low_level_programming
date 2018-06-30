#include "holberton.h"
/**
 * print_triangle - function that prints triangle followed by new line
 * @size: parameter is size
 */

void print_triangle(int size)
{
	int x;
	int y;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (y = 0; y < size; y++)
	{
		for (x = 1; x <= size; x++)
		{
			if (x < size - y)
			{
				_putchar(' ');
			}
			else
			{
				_putchar('#');
			}
		}
	_putchar('\n');
	}

}
