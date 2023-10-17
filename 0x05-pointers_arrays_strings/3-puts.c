#include "main.h"

/**
 * _puts - Print a string followed by a new line
 * @str: string to print
 * Return: string and new line
 */

void _puts(char *str)
{
int i = 0;
while (str[i])
{
_putchar(str[i]);
i++;
}
_putchar ('\n');
}
