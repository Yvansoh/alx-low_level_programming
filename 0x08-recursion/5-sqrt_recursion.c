#include "main.h"

/**
 * _sqrt_recursion - function that returns the natural sroot of a number
 * @n: number to be tested
 * Return: 0 if has natural squre root and -1 if it does not have
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);

	return (_sqrt_helper(n, 1));
}
