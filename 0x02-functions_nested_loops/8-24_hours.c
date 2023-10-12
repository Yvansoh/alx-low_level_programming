#include "main.h"

/**
 * jack_bauer - Print every minute
 * Return: void
 */
void jack_bauer(void)
{
int a, b, c, d;

for (a = 0; a < 24; a++) /* Loop through hours (00 to 23) */
{
for (b = 0; b < 60; b++) /* Loop through minutes (00 to 59) */
{
/* Calculate tens and ones digits of hour and minute */
c = a / 10;
d = a % 10;

_putchar(c + '0');
_putchar(d + '0');
_putchar(':');

c = b / 10;
d = b % 10;

_putchar(c + '0');
_putchar(d + '0');
_putchar('\n');
}
}
}

