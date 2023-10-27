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
	printf("%d\n", argc - 1);
	return (0);
}
