#include "main.h"
#include <stdio.h>

/**
 * main - prints number of arguements passed to it
 * @argc: arguement count
 * @argv: array of arguements
 * Return: 0 if successful
 */

int main(int argc, char *argv[])
{
	int i;

	printf("Arguement count (argc) is: %d\n", argc);
	for (i = 0; i < argc; i++)
	{
		printf("Number of arguements: %d\n", argc);
	}
	return (0);
}
