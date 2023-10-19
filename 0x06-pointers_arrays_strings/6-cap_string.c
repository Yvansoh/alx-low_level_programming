#include "main.h"

/**
 * cap_string - Capitalize all words in a string.
 * @s: The input string.
 *
 * Return: Pointer to the modified string.
 */
char *cap_string(char *s)
{
	int i;
	int cap_next = 1; /* Capitalize the first character */

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' ||
			s[i] == ',' || s[i] == ';' || s[i] == '.' || s[i] == '!' ||
			s[i] == '?' || s[i] == '"' || s[i] == '(' || s[i] == ')' ||
			s[i] == '{' || s[i] == '}')
		{
			cap_next = 1; /* Set the flag to capitalize the next character */
		}
		else if (cap_next && (s[i] >= 'a' && s[i] <= 'z'))
		{
			s[i] = s[i] - ('a' - 'A'); /* Convert to uppercase */
			cap_next = 0; /* Reset the flag */
		}
		else
		{
			cap_next = 0; /* Reset the flag */
		}
	}

	return (s);
}

