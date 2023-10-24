#include "main.h"

/**
 * _memset - a function that fills memory witha constant byte
 * @s: pointer to memory area
 * @b: value to be filled
 * @n: number of bytes to be filled
 * Return: pointer to filled memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}


