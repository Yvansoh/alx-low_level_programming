#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * create_array - Entry point of program
 * @size: size of array to create
 * @c: character to initialize array with
 *
 * Return: Null
 */

char *create_array(unsigned int size, char c)
{
	char *array;

	if (size == 0)
	{
		return (NULL);
	}

	array = malloc(sizeof(char) *size);
	if (array ==  NULL)
	{
		return (NULL);
	}
	for (unsigned int i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
