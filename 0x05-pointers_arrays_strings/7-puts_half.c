#include "main.h"

/**
 * puts_half - Prints the second half of a string, followed by a new line.
 * @str: The string to be processed.
 */
void puts_half(char *str)
{
    int length = 0;
    int i;

    /* Calculate the length of the string */
    while (str[length] != '\0')
        length++;

    /* Determine the starting index for the second half */
    if (length % 2 == 0)
        i = length / 2; /* Even length: start at half index */
    else
        i = (length + 1) / 2; /* Odd length: start at (length + 1) / 2 index */

    /* Print the second half of the string */
    while (str[i] != '\0')
    {
        _putchar(str[i]);
        i++;
    }

    _putchar('\n');
}

