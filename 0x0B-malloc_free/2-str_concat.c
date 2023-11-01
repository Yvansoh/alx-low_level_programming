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
char *concatenate;
int s1len = 0;
int s2len = 0;
int i;

if (s1 == NULL)
	s1 = " ";

if (s2 == NULL)
	s2 = " ";

for (i = 0; s1[i] != '\0'; i++)
	s1len++;

for (i = 0; s2[i] != '\0'; i++)
	s2len++;

concatenate = malloc(sizeof(char) * (s1len + s2len + 1));

if (concatenate == NULL)
	return (NULL);

for (i = 0; s1[i] != '\0'; i++)
	concatenate[i] = s1[i];

for (i = 0; s2[i] != '\0'; i++)
	concatenate[s1len + i] = s2[i];

return (concatenate);
}
