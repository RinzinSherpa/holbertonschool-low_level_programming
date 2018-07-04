#include "holberton.h"
/**
 * puts_half - prints half of a string,followed by a new line
 * @str: parameter is str
 */
void puts_half(char *str)
{

	int i;
	int z;

	for (i = 0; str[i] != '\0'; i++)
	{

	}
	if (i % 2 != 0)
	{
		z = (i + 1) / 2;
	}
	else
	{
		z = i / 2;
	}
	for (i = z; str[i] > '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

