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
	int a =  atoi(argv[1]);
	int b =  atoi(argv[2]);
	int z;


	if (argc != 3)
	{
		printf("Error");
		printf("\n");
		return (1);
	}

	if (argc == 3)
	{
		z = a * b;
		printf("%d\n", z);
	}
	return (0);
}

