#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to be converted.
 *
 * Return: The integer value of the string.
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1; /* Initialize to positive */

	/* Skip leading non-numeric characters */
	int i = 0;
	while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))

	{
		if (s[i] == '-')
			sign = -sign; /* Handle minus sign */
		i++;
	}

	/* Calculate the integer value */
	while (s[i] != '\0' && (s[i] >= '0' && s[i] <= '9'))
	{
		result = result * 10 + (s[i] - '0');
		i++;
	}

	return (result * sign);
}

