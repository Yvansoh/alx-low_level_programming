#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings
 * @s1: String, Input one to be linked
 * @s2: string, Input two to be linked
 *
 * Return: Always 0 (Success), NULL if fails
 */

char *str_concat(char *s1, char *s2)
{
char *link;
int b = 0;
int ti = 0;

if (s1 == NULL || s2 == NULL)
{
return ("");
}

b = ti = 0;

while (s1[b] != '\0')
b++;
while (s2[ti] != '\0')
ti++;

link = malloc(sizeof(char) * (b + ti + 1));
if (link == NULL)
{
return (NULL);
}
b = ti = 0;
while (s1[b] != '\0')
{
link[b] = s1[b];
b++;
}
while (s2[ti] != '\0')
{
link[ti] = s2[ti];
ti++;
b++;
}
link[b] = '\0';

return (link);
}
