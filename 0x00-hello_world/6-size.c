#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char charType;
	int intType;
	long int longintType;
	long long longlongType;
	float floatType;

	printf("Size of a char: %ld byte(s)\n", sizeof(charType));
	printf("Size of an int: %zu byte(s)\n", sizeof(intType));
	printf("Size of a longe: %ld byte(s)\n", sizeof(longintType));
	printf("Size of a long long: %ld byte(s)\n", sizeof(longlongType));
	printf("Size of a float: %ld byte(s)\n", sizeof(floatType));
	return (0);
}
