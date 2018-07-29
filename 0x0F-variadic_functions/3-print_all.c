#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 *print_all - function that prints anything
 *@format: contains the list of arguments
 *Return: returns nothing
*/
void print_all(const char * const format, ...)
{
	int i = 0;
	va_list ap;
	char *z;


	va_start(ap, format);
	while (format)
	{
		while (format[i] != '\0')
		{
			switch (format[i])
			{	
				case 'c':
				printf("%c", va_arg(ap, int));
				break;

				case 'i':
				printf("%d", va_arg(ap, int));
				break;

				case 'f':
				printf("%f", va_arg(ap, double));
				break;

				case 's':
				z = va_arg(ap, char *);
				if (z != NULL)
				{
					printf("%s", z);
					break;
				}
				z = "(nil)";
				printf("(nil)");
				break;
				default:
				i++;
				continue;
			}
			if (format[i + 1] != '\0')
			{
				printf(", ");
			}	
		i++;
		}
		va_end(ap);
		break;
	}
	printf("\n");
}
