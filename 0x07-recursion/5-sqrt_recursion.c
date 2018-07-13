#include "holberton.h"
/**
 *helper - function created due to multiple computation
 * @n: n is the input variable of type int
 * @x: x is the input variable of type int
 * Return: the output value of return is of type int
 */
int helper(int n, int x)
{
	if (n == x * x)
	{
		return (x);
	}
	if (n < x * x)
	{
		return (-1);
	}
	return (helper(n, x + 1));
}

/**
 *_sqrt_recursion - function returning the natural square root of a number
 * @n: n is the input variable of type int
 * Return: the output value of return is of type int
 */
	int _sqrt_recursion(int n)
	{
	return (helper(n, 0));
	}
