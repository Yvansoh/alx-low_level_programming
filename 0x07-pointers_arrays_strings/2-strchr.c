#include "main.h"

/**
 * _strchr - A function that locates a character in a string
 * @s: pointer to memory area
 * @c: character to be located
 * Return: NULL if not successful
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (NULL);
}
