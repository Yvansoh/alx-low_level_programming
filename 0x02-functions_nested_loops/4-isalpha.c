#include "main.h"
/**
 * _isalpha - Check alphabets
 * @c: character to be checked
 * Return: 1 for alphabet character and 0 for anything else
 */
int _isalpha(int c)
{
if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
{
return (1);
}
return (0);
}
