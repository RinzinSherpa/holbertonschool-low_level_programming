#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *init_dog - function initialize a variable of type
 *@d: d is a pointing to struct dog
 *@name: First member
 *@age: Second member
 *@owner: Third member
 *Return: returns nothing
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}
	d->name  = name;
	d->age = age;
	d->owner = owner;
}
