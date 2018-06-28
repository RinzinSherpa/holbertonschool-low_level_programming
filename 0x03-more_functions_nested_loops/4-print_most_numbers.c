#include "holberton.h"
/**
 * print_most_numbers - prints from 0 to 9 with new line but skips 2 & 4
*/

void print_most_numbers(void)
{

	int x;

	for (x = '0'; x <= '9'; x++)
	{
		if (x == '2' || x == '4')
		{
			continue;
		}
		_putchar(x);
	}
	_putchar('\n');
}
