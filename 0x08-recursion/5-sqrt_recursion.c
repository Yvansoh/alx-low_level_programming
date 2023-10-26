#include "main.h"

/**
 * _sqrt_recursion - Finds the square root of a number
 * @n: Integer to test
 * Return: Square root, -1 for a num with no square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (0);
	}
	return (actual_sqrt_recursion(n, 1));
}

/**
 * actual_sqrt_recursion - Recursively finds the integer square root of number
 * @n: Number to test
 * @i: Iterator
 * Return: Square root or -1 if there's no exact square root
 */

int actual_sqrt_recursion(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	if (i * i > n)
	{
		return (-1);
	}
	return (actual_sqrt_recursion(n, i + 1));
}
