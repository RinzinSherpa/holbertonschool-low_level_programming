#include "holberton.h"

/**
 * *print_chessboard - function that fills memory with a constant byte
 * @a: it is the pointer with variable a of type int
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int j;
	for (i = 0; i < 8; i++)
	{
		for (j =0; j < 8; j++)
		{
			_putchar (a[i] [j]);
		}
	_putchar('\n');
	}
}  
