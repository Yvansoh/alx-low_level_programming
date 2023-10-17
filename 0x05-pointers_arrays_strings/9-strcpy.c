#include "main.h"

/**
 * _strcpy - Copies a string from src to dest, including the null byte.
 * @dest: The buffer to copy the string into.
 * @src: The source string to be copied.
 *
 * Return: The pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0'; /* Add the null terminator to dest */

	return (dest);
}

