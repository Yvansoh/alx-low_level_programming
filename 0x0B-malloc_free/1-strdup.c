#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Returns a pointer but to a new allocated space(copy of original)
 * @str: char
 *
 * Return: pointer to duplicated string, NULL if fails
 */

char *_strdup(char *str)
{
int i;
char *sss;
int count = 0;

if (str == NULL)
{
return (NULL);
}
for (i = 0; str[i] != '\0'; i++)
count++;

sss = malloc(sizeof(char) * (count + 1));
if (sss == NULL)
{
return (NULL);
}

for (i = 0; str[i] != '\0'; i++)
sss[i] = str[i];

return (sss);
}
