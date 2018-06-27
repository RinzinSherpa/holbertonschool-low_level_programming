#include "holberton.h"
/**
 * _abs - computes the absloulte value of an integer.
 * @r: compute the absolute value of an integer.
 * Return: return type is int
 */
int _abs(int r)
{

	if (r < 0)
	{
		return (r * -1);
	}
	else if (r > 0)
	{
		return (r);
	}
	else
	{
		return (r);
	}
return (0);
}

