#include <stdarg.h>
#include "variadic_functions.h"

/**
 *sum_them_all - adds all the parameters
 *@n: input argument parameter is of type int
 *@...: takes any number of input argument
 *Return: output value of the function is of type int
 */

int sum_them_all(const unsigned int n, ...)
{

	unsigned int i;
	int sum = 0;
	va_list ap;


	va_start(ap, n);

	if (n == 0)
	{
		return (0);
	}

	for (i = 0; i < n ; i++)
	{
		sum = sum + va_arg(ap, int);
	}

	va_end(ap);

	return (sum);
}

