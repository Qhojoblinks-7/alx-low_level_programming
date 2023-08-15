#include <stdio.h>
#include "dog.h"
/**
 * init_dog - a function that initialize a
 * variable of type struct dog
 * @d: a pointer to the structure
 * @name: a pointer to the name of the dog
 * @owner: a pointer to the name of the owner
 * @age: the age of the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
