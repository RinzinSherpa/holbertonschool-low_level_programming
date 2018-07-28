#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"


/**
 *print_numbers - print number followed by new line
 *@n:n is an input argument parameter of type unsigned int
 *@separator: is a pointer pointing to char
 *Return: returns nothing
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{

	unsigned int i;
	va_list ap;

	va_start(ap, n);

	if (separator == NULL)
	{
		return;
	}

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (i != n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(ap);
}
