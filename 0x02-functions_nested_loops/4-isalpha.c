#include "holberton.h"
/**
 * _isalpha - checks for alphabetic character.
 * @c: The number to be checked
 * Return: 1 if c is a letter,lowercase or uppercase otherwise return 0
 */
int _isalpha(int c)
{

	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}
