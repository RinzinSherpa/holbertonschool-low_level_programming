#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - prints all natural number from n to 98
 * @n: first parameter
 */
void print_to_98(int n)
{
	int x = 98;

	if (n < 98)
	{
		for (x = 0; x < 99; x++)
		{
			printf("%d", x);
			printf(",");
			printf(" ");
		}
	}
	else if (n != 98)
	{
		printf(",");
		printf(" ");
	}
	else if (n > 98)
	{
		for (x =111; x <= 98; x++)
		{
			printf("%d", x);
			printf("\n");
		}
	}
	else if (n == 81)
	{
		for (x = 81; x >= 98; x++)
		{
			printf("%d", x);
			printf("\n");
		}
	}
	else if (n < 98)
	{
		for (x = -10; x <= 98; x--)
		{
			printf("%d", x);
		}
	}
	else
		{
		printf("%d", x);
		}
	printf("\n");
}

