#include <stdio.h>
/**
 * main - A program that prints lowercase followed by uppercase
 * Return: 0 (Success)
 */
int main(void)
{
	char letter = 'a';
	while (letter <= '2')
	{
		putchar(letter);
		letter++;
	}
	letter = 'A';
	while (letter <= 'Z')
	{
		putchar(letter);
		letter++:
	}
	putchar('\n');
	return (0);
}
