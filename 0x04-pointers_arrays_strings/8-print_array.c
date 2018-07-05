#include "holberton.h"
#include <stdio.h>
/**
 * print_array - prints half of a string,followed by a new line
 * @a: a is the pointer
 * @n: n is the parameter of type integer
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
		printf(",");
		printf(" ");
		}
	}
	printf("\n");
}

