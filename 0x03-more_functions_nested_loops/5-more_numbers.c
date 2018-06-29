#include "holberton.h"
/**
 * more_numbers - prints 10 times from 0 to 14 follwed by new line
*/
void more_numbers(void)
{
	int x;
	int z;

	for (x = 0; x <= 9; x++)
	{
		for (z = 0; z <= 14; z++)
		{
			_putchar(z / 10 + '0');
			if (z > 9)
			{
				_putchar(z % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
