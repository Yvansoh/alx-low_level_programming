#include "main.h"

/**
 * _pow_recursion - returns value of x raisd to power y
 * @x: base value
 * @y: exponent value
 * Return: 0 if positive and -1 ifnumber is negative
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);

	return (x * _pow_recursion(x, y - 1));
}
