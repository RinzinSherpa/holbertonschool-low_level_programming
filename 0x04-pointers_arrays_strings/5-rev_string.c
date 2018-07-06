#include "holberton.h"

/**
 *rev_string - prints a string followed by new line
 *@s: parmeter is s
 */

void rev_string(char *s)
{
	int length;
	int Temp;
	int count;
	int left;

	for (length = 0; s[length] != '\0'; length++)
	{
		;
	}

	for (count = length - 1, left = 0 ; count >= length / 2; count--, left++)
	{
		Temp = s[count];
		s[count] = s[left];
		s[left] = Temp;
	}
}
