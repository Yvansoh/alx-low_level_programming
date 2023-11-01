#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of program
 * @argc: Number of arguements
 * @argv: Array of arguements
 *
 * Return: 0 if successful and 1 if there is error
 */

int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);

	num2 = atoi(argv[2]);

	result = num1 * num2;

	printf("%d\n", result);

	return (0);

}
