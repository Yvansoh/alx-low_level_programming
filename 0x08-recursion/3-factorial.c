#include "main.h"

/**
 * factorial - return function of a given factorial
 * @n: integer to be tested
 * Return: Factorial of n and -1 for negative input
 */

int factorial(int n)
{
if (n == 0)
{
return (1);
}
else
if (n < 0)
{
return (-1);
}
{
return (n * factorial(n - 1));
}
}
