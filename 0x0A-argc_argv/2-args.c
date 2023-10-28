#include <stdio.h>

/**
 * main - entry point of the program
 * @argc: number of arguements
 * @argv: array of arguements
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	printf("Arguement (argc) is: %d\n", argc);
	for (i = 0; i <argc; i++)
	{
		printf("%s\n", argv[i]);
		printf("Arguements passed are: \n");
	}
	return (0);
}
