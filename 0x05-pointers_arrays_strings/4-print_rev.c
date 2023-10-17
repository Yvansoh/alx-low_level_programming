#include "main.h"

/**
 * print_rev - Prints a string in reverse, followed by a new line.
 * @s: The string to be printed in reverse.
 */

void print_rev(char *s)
{
int start = 0;

while (s[start])
start++;

while (start--)
_putchar(s[start]);

_putchar('\n');
}

