#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - makes a grid
 * @width: width input
 * @height: height input
 *
 * Return: pointer to a 2-dimensional array
 */

int **alloc_grid(int width, int height)
{
int **lol;
int c;
int d;

if (width <= 0 || height <= 0)
{
return (NULL);
}
lol = malloc(sizeof(int *) * height);
if (lol == NULL)
{
return (NULL);
}
for (c = 0; c < height; c++)
{
lol[c] = malloc(sizeof(int) * width);
if (lol[c] == NULL)
{
for (; c >= 0; c--)
free(lol[c]);
free(lol);
return (NULL);
}
}

for (c = 0; c < height; c++)
{
for (d = 0; d < width; d++)
lol[c][d] = 0;
}
return (lol);
}
