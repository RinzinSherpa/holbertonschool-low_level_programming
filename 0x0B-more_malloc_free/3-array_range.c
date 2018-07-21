#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *array_range - function is a pointer that creates arrays of integers
 *@min: int min is input parameter of type int
 *@max: max is input parameter of type int
 *Return: return output value is of type int
*/
int *array_range(int min, int max)
{

	int *ipter;
	int x, y;

	y = 0;
	if (min > max)
	{
		return (NULL);
	}

	ipter = malloc(sizeof(int) * (max - min) + 1);
	if (ipter == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < (max - min) + 1; x++, y++)
	{
		ipter[x] = y;
	}
	return (ipter);
}

