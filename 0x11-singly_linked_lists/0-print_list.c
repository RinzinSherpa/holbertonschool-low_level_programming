#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * print_list - prints all the element of list_t
 * @h: input argument is an pointer pointing to list_t
 * Return: output value gives the size
*/

size_t print_list(const list_t *h)
{


	int count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			count++;
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
			count++;
		}
		h = h->next;
	}
	return (count);
}
