#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>
/**
  *main - program that prints all arguments it receives
  *@argc: input parameter is of type int
  *@argv: input parameter is a pointer of type char
  *Return: return value of the output is of type int
 */
int main(int argc, char *argv[])
{

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	return (0);
}

