#include "function_pointers.h"
/**
 *print_name - function that prints a name
 *@name: name is a pointer to char
 *@f: f is a function pointer that does not take any parameters
 *char: char is a function pointer that does not take any parameter
 *Return: returns nothing
*/


void print_name(char *name, void (*f)(char *))
{

	(*f)(name);
}
