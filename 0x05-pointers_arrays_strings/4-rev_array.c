#include "holberton.h"
/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: a is the pointer of type int
 * @n: n is the variable of type integer
 */
void reverse_array(int *a, int n)
{

	int length, sndlen, temp, lftcount;

	for (length = 0; a[length] != '\0' && length < n; length++)
	{
		;
	}
	for (sndlen = n - 1, lftcount = 0 ; lftcount < sndlen; sndlen--, lftcount++)
	{
		temp = a[sndlen];
		a[sndlen] = a[lftcount];
		a[lftcount] = temp;
	}
}
