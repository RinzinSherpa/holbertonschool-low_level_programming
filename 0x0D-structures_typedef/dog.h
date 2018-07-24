#ifndef _dog_H_
#define _dog_H_

/**
 *struct dog - Define a new type struct dog
 * @name: First member
 * @age: Second member
 * @owner: Third member
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);


#endif
