#include "main.h"

/**
 * _abs - compile absolute value
 * @c: number to be checked
 * Return: absolute vakue of number or zero
 */

int _abs(int c)
{
if (c < 0)
{
int abs_val;

abs_val = c * -1;
return (abs_val);
}
return (c);
}
