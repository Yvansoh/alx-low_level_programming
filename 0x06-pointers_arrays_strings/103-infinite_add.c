#include "main.h"

/**
 * infinite_add - Adds two positive numbers.
 * @n1: The first number as a string.
 * @n2: The second number as a string.
 * @r: The buffer to store the result.
 * @size_r: The size of the buffer.
 *
 * Return: A pointer to the result (r), or 0 if result cannot be stored in r.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1, len2, len, carry = 0;

	for (len1 = 0; n1[len1] != '\0'; len1++)
		;
	for (len2 = 0; n2[len2] != '\0'; len2++)
		;

	if (size_r <= len1 + 1 || size_r <= len2 + 1)
		return (0);

	len = len1 > len2 ? len1 : len2;
	r[len + 1] = '\0';

	while (len1 > 0 || len2 > 0)
	{
		len1--;
		len2--;

		if (len1 >= 0)
			carry += n1[len1] - '0';
		if (len2 >= 0)
			carry += n2[len2] - '0';

		r[len] = (carry % 10) + '0';
		carry /= 10;
		len--;
	}

	if (carry)
	{
		if (size_r <= len + 2)
			return (0);
		r[len + 1] = (carry % 10) + '0';
	}

	return (r + (carry ? len : len + 1));
}

