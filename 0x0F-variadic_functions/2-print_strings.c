#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 *print_strings - print number followed by new line
 *@n:n is an input argument parameter of type unsigned int
 *@separator: is a pointer pointing to char
 *Return: returns nothing
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *z;
	va_list ap;
	va_start(ap, n);
	
	if (separator == NULL)
	{
		return;
	}
	
	for (i = 0; i < n; i++)
	{
		z = va_arg(ap,char *);	
	
		if (z != NULL)
		{
			printf("%s", z);
		}
		if (z == NULL)
		{
			printf("nil");
		}
		if (i != n - 1)
		{
			printf("%s", separator);
		}
	}
	printf ("\n");
	va_end(ap);
}	
