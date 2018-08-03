#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"


/**
 *list_len - returns the number of elements linked in list_t
 *@h: input argument
 *Return: output value gives the number of elements
*/

size_t list_len(const list_t *h)
{

	int i;

	for (i = 0; h != NULL; i++)
	{
		h = h->next;
	}
	return (i);
}

