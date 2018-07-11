#include "holberton.h"
/**
 * _strspn - function that gets the length of a prefix substring
 * @s: input is the pointer with variable s of type char
 * @accept: f is the input variable of type char
 * Return: return value of the output is of type unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{

	unsigned int i;
	unsigned int z;



	for (i = 0; s[i] != '\0'; i++)
	{
		for (z = 0; accept[z] != '\0'; z++)
		{
			if (s[i] == accept[z])
			{
				break;
			}
		}

	if (!accept[z])
	{
		break;
	}
	}
	return (i);
}
