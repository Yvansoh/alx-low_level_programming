#include "main.h"

int actual_sqrt_recursion(int n, int i);
/**
 * _sqrt_recursion - Finds the natural square root of a number
 * @n: Integer to test
 * Return: Square root, -1 for a num with no square root
 */

int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
else
{
return (actual_sqrt_recursion(n, 0));
}
}

/**
* actual_sqrt_recursion - recursively finds natural sqrt of a number
* @n: Number to test
* @i: Iterator
* Return: Square root
*/

int actual_sqrt_recursion(int n, int i)
{
if (i * i > n)
return (-1);
if (i * i == n)
return (i);
return (actual_sqrt_recursion(n, i + 1));
}
