#include "holberton.h"
/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: a is the pointer of type int
 * @n: n is the variable of type integer
 */
void reverse_array(int *a, int n)
{

	int length;
	int secondlength;
	int temp;
	int leftcount;

	for (length = 0; a[length] != '\0' && length < n; length++)
	{
		;
	}
	for (secondlength = n - 1, leftcount = 0 ; leftcount < secondlength; secondlength--, leftcount++)
	{
		temp = a[secondlength];
		a[secondlength] = a[leftcount];
		a[leftcount] = temp;
	}
}
