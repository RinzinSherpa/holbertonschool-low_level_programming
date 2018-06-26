#include "holberton.h"
/**
* print_alphabet_x10 - prints alphabet ten times in lowercase
*/
void print_alphabet_x10(void)
{
	int z,p;

	for (z = 0; z <= 9; z++)
	{
		for(p = 0 ; p <= 25; p++)
			{
				_putchar(p+'a');
			}
	_putchar('\n');
	}
}
