#include <stdio.h>
#include "holberton.h"

/**
 * main - program that prints its name followed by a new line
 * @argc: input parameter is argc of type int
 * @argv: input parameter is a pointer of type char
 * Return: return output value is of type int
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s", argv[i]);
	}
	printf("\n");
	return (0);
}
