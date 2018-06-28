#include "holberton.h"

/**
 * _isupper - function that checks for uppercase character
 * print_hello - Prints "Hello"
 * @c: parameter is c
 * Return: return type is int
*/
int _isupper(int c)
{

	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
