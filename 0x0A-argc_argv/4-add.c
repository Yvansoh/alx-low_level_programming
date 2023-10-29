#include <stdio.h>
#include <stdlib.h>

/**
 * is_positive_number - Check if number is positive
 * @str: The string to check
 *
 * Return: 1 if its positive number, 0 otherwise
 */

int is_positive_number(const char *str)
{
	if (*str == '-')
	{
		return (0);
	}
	while (*str)
	{
		if (*str < '0' || *str > '9')
		{
			return (0);
		}
		str++;
	}
	return (1);
}

/**
 * main - Entry point of program
 * @argc: Arguement count
 * @argv: Array of arguements
 *
 * Return: 0 if successful, 1 if on error
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (is_positive_number(argv[i]))
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}

	}

	printf("%d\n", sum);

	return (0);

}
