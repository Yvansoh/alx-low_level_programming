#include "main.h"

/**
 * _memcpy - A function that copies memory area
 * @src: pointer source
 * @dest: pointer destination
 * @n: number of bytes to be copied
 * Return: pointer to destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
