#include "holberton.h"
/**
 * print_last_digit -  function that prints the last digit of a number
 * @r: print the last digit of a number
 * Return: return type is int
 */
int print_last_digit(int r)
{
	int x;

	if (r > 0)
	{
		x = r % 10;
		_putchar (x + '0');
	}
	else if (r < 0)
	{
		x = (r % 10) * -1;
		_putchar (x + '0');
	}
	else
	{
		_putchar ('0');
	}
	return (x);
}

