#include <stdio.h>

/**
 * main - Entry point of program
 * @argc: arguement count
 * @argv: array of arguements
 *
 * Return: 0 if successful
 */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
