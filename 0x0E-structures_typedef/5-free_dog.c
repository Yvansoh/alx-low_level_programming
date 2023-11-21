#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - Function that frees dog
 * @d: pointer to dog structure
 *
 * Return:
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}

	if (d->name != NULL)
	{
		free(d->name);
	}

	if (d->owner != NULL)
	{
		free(d->owner);
	}

	free(d);
}

/**
 * new_dog - dog structure
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
	{
		return (NULL);
	}

	new_dog->name = strdup(name);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	new_dog->age = age;
	new_dog->owner = strdup(owner);

	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	return (new_dog);
}
