#include<stdio.h>

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
	printf("Size of char: %ld bytes\n", sizeof(charType));
	printf("size of int: %zu bytes\n", sizeof(intType));
	printf("Size of longe: %ld bytes\n", sizeof(longintType));
	printf("Size of longlong: %ld byte\n", sizeof(longlongType));
	printf("Size of float: %ld bytes\n", sizeof(floatType));
	return (0);
}
