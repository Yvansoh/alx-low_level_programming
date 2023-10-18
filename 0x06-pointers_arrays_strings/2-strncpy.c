#include "main.h"
/**
 * _strncpy - a function that copies a string
 * @dest: destination string pointer
 * @src: source string
 * @n:number of bytes to be used
 * Return: pointer to destination string
 */

char *_strncpy(char *dest, char *src, int n)
{
int byte_count;

for (byte_count = 0; byte_count < n && src[byte_count] != '\0'; byte_count++)
{
dest[byte_count] = src[byte_count];
}

for (; byte_count < n; byte_count++)
{
dest[byte_count] = '\0';
}

return (dest);
}

