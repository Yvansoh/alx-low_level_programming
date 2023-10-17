#include "main.h"

/**
 * _strlen - return length of a string
 * @s: string to be checked
 * Return: string length
 */

int _strlen(char *s)
{
int string_length = 0;
while (s[string_length])
string_length++;
return (string_length);
}

