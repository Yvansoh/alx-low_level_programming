#include "main.h"

/**
 * swap_int - Swap the values of two integers
 * @a: swaps the store adress of b
 * @b: swaps the store address of a
 * Return: 0
 */

void swap_int(int *a, int *b)

{
int temp;
temp = *b;
*b = *a;
*a = temp;
}

