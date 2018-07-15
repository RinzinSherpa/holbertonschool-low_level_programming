#include <stdio.h>
/**
 * main - program that prints all arguments it receives
 * @argc: input parameter is of type int
 * @argv: input parameter is a pointer of type char
 * Return: return value of the output is of type int
*/

int main(int argc, char  *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

