#include <stdio.h>

/**
 * main - entry point
 * @argc: int arguement count
 * @argv: array of arguements
 *
 * Return: 0 if successful
 */

int main(int argc, char *argv[])
{
	int i;

	printf("Arguement count is: %d\n", argc);
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[0]);
		printf("The program name is: \n");
	}
	return (0);
}
