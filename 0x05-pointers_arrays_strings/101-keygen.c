#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * generate_password - Generates a random valid password.
 * @length: The length of the password to generate.
 *
 * Return: A pointer to the generated password.
 */
char *generate_password(int length)
{
	char *password = malloc(length + 1);

	if (password == NULL)
	{
		return (NULL); /* Memory allocation failed */
	}

	srand(time(NULL));

	for (int i = 0; i < length; i++)
	{
		password[i] = charset[rand() % (sizeof(charset) - 1)];
	}

	password[length] = '\0'; /* Null-terminate the password */
	return (password);
}

/**
 * main - Entry point of the program.
 *
 * Return: Always 0.
 */
int main(void)
{
	char *password = generate_password(10); /* Generate a 10 character password */

	if (password != NULL)
	{
		printf("Generated Password: %s\n", password);
		free(password); /* Don't forget to free the memory */
	}
	else
	{
		printf("Memory allocation failed.\n");
	}

	return (0);
}

