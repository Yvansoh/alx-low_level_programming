#include <stdio.h>

/**
 * main - Entry point of the program
 * @argc: number of arguements
 * @argv: array of arguements
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	printf("Arguement (argc) is: %d\n", argc);

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);

}
