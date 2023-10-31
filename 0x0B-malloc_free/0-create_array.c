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

	array = malloc(sizeof(char) * size);
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

#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of program
 * create_array - creates an array of characters and initializes with character
 * @size: size of aray to create
 * @c: character to initialize array with
 *
 * Return: 0
 */

char *create_array(unsigned int size, char c);

int main(void)
{
	unsigned int size = 10;
	char character = 'A';
	char *result = create_array(size, character);

	if (result != NULL)
	{
		for (unsigned int i = 0; i < size; i++)
		{
			printf("%c ", result[i]);
		}
		free(result);
	}
	else
	{
		printf("Failed to create the array.\n");
	}
	return (0);
}

