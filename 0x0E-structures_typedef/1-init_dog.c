#include <stdio.h>
#include <stddef.h>
#include "dog.h"

/**
 * init_dog - initializes struct dog
 * @d: pointer to dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
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
