#include "main.h"
/**
 * print_sign - prints sign of a number
 * @n: character to be checked
 * Return: 1 if num is poistive, -1 if num is negative and 0 for anything else
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
return (1);
}
else if (n < 0)
{
_putchar(45);
return (-1);
}
else
{
_putchar(48);
return (0);
}
}
