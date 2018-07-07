#include "holberton.h"
/**
 * _strcmp - function that compares two strings
 * @s1: s1 is the pointer of type char
 * @s2: s2 is the pointer of type char
 * Return:the return value of the output is an integer
 */

int _strcmp(char *s1, char *s2)
{
	int length;
	int secondlength;
	int temp;
	int store = 0;


	for (length = 0; s1[length] != '\0'; length++)
	{
		;
	}
	for (secondlength = 0; s2[secondlength] != '\0'; secondlength++)
	{
		;
	}
	for (temp = 0; temp < length; temp++)
	{
		if (s1[temp] !=  s2[temp])
		{
			store = (s1[temp] - s2[temp]);
			break;
		}
	}
	return (store);
}
