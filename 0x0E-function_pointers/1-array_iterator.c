#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - executes funct given as parameter on  every array  element
 * @array: is a pointer to int
 * @size: is the size of array
 * @action: is a pointer function pointing to int with void return
 * Return: returns nothing
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{

	unsigned int i;

	if (array == NULL || size == 0 || action == NULL)
	{
		return;
	}
		for (i = 0; i < size; i++)
		{
			(*action)(array[i]);
		}

}
