#include "holberton.h"
/**
 *_pow_recursion - function returning the value of x raised to the power of y
 * @x: x is the input variable of type int
 * @y: y is the input variable of type int
 * Return: the output value of return is of type int
 */
int _pow_recursion(int x, int y)
{

	if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	if (y == 0)
	{
		return (1);
	}
	else
	{
		return (-1);
	}
}
