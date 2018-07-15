#include <stdio.h>
#include "holberton.h"

/**
 * main - function
 *@argc : input parameter is argc of type int
 *@argv : input parameter is a pointer of type char
 *Return: the return value is of type int
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
