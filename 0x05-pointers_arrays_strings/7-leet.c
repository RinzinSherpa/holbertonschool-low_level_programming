#include "holberton.h"
/**
 * *leet - function that encodes a string into 1337
 * @s: s is the pointer of type char
 * Return: return output value is of type char
 */
char *leet(char *s)
{

	int index;
	char string1[] = "aAeEoOtTlL";
	char stringnumber[] = "4433007711";
	int i;

	for (index = 0; s[index] != '\0' ; index++)
	{
		for (i = 0; string1[i] != '\0' ; i++)
		{
			if (s[index] == string1[i])
			{
				s[index] = stringnumber[i];
			}

		}
	}
	return (s);
}
