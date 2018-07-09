#include "holberton.h"
/**
 * *rot13 - function that encodes a string using rot13
 * @s: s is the pointer of type char
 * Return: return output value is of type char
 */
char *rot13(char *s)
{

	int i;
	int z;
	char inputstring[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char outputstring[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (z = 0; inputstring[z] != '\0'; z++)
		{
			if (s[i] == inputstring[z])
			{
				s[i] = outputstring[z];
			}
		}
	}
	return (s);
}
