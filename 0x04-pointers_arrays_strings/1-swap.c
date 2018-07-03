#include "holberton.h"
/**
 * swap_int - function that swaps the value of two integers
 * @a: parmeter is *a
 * @b: parameter is *b
 */

void swap_int(int *a, int *b)
{

	int z;

	z = *a;
	*a = *b;
	*b = z;
}
