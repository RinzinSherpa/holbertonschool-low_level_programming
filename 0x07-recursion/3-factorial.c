#include "holberton.h"
/**
 * factorial - function that returns the factorial of a given number
 * @n: ble s of type char
 * Return: the output value of return is of type int
 */
int factorial(int n)
{
	if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	if (n == 0)
	{
		return (1);
	}
	else
	{
		return (-1);
	}
}
