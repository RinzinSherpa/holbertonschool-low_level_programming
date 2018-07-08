#include "holberton.h"
/**
 * *cap_string - function that reverses the content of an array of integers
 * @s: s is the pointer of type char
 * Return: return output value is of type char
 */
char *cap_string(char *s)
{

	int start;

	for (start = 0; s[start] != '\0'; start++)
	{
		if (s[0] >= 'a' && s[0] <= 'z')
		{
			s[start] = (s[start] - 32);
		}
		if (s[start] >= 'a' && s[start] <= 'z')
		{
			switch (s[start - 1])

				case ',':

				case ';':

				case '.':

				case '!':

				case '?':

				case '"':

				case '(':

				case ')':

				case '{':

				case '}':

				case '\n':

				case ' ':

				case '\t':

			s[start] = (s[start] - 32);
		}
	}
	return (s);
}
