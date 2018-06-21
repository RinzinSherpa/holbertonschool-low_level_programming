#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main()
{
	char charType;
	float floatType;
	long longType;
	long longlongType; 
	printf("Size of char: %ld bytes\n",sizeof(charType));
	printf("Size of float: %ld bytes\n",sizeof(floatType));
	printf("Size of longe: %ld bytes\n",sizeof(longType));
	printf("Size of longlong: %ld byte\n",sizeof(longlongType));
	return(0);
}
