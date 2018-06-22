#include <stdio.h>
/**
*main - Entry point*
*This is the preferred style for multi -line
*Return: Always 0 (Success)
*/

int main(void)
{
	char c;
	for (c = 'a' ; c <= 'z'; c++)
	{
	if (c == 'e' || c == 'q')
	{
	  c++;
	}
	putchar(c);
	}
	putchar('\n');
	return (0);
}
