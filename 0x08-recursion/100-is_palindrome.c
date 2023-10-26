#include "main.h"

/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: Pointer to the string to check
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */

int is_palindrome(char *s)
{
	int length = 0;
	int i, j;

	if (s == NULL)
		return (0);
	while (s[length] != '\0')
		length++;
	for (i = 0, j = length - 1; i < j; i++, j--)
	{
		if (s[i] != s[j])
			return (0);
	}
return (1);
}

