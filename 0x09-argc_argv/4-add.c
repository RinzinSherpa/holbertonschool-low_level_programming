#include <stdio.h>
#include <stdlib.h>
/**
  *main - program that prints all arguments it receives
  *@argc: input parameter is of type int
  *@argv: input parameter is a pointer of type char
  *Return: return value of the output is of type int
 */
int main(int argc, char *argv[])
{

	int i;
	int j;
	int sum;


	sum = 0;
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0 ; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < 48 || argv[i][j] >= 58)
			{
				printf("Error\n");
				return (1);
			}
		}
		sum = sum + atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}

