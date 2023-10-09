#include <stdio.h>

/**
 * main - A program that prints alphabets except q and e
 *
 * Return: 0 (Sucess)
 */

int main(void)
{
	char letter = 'a';
	while (letter <= 'z')
	{
		if (letter != 'q' && letter != 'e')
		{
			putchar(letter);
		}
		letter++;
	}

	putchar ('\n');

	return (0);
}

