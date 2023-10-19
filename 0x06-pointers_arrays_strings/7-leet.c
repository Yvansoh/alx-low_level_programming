#include "main.h"

/**
 * leet - Encodes a string into 1337 (leet speak).
 * @s: The input string to be encoded.
 *
 * Return: Pointer to the modified string.
 */
char *leet(char *s)
{
	int i, j;
	char leetMap[] = "aAeEoOtTlL";
	char leetCodes[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; leetMap[j] != '\0'; j++)
		{
			if (s[i] == leetMap[j])
			{
				s[i] = leetCodes[j];
				break;
			}
		}
	}

	return (s);
}

