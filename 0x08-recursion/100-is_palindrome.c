#include "main.h"

/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: Pointer to the string to check
 *
 * Return: true if the string is a palindrome, false otherwise
 */
bool is_palindrome(char *s, int start, int end)
{
	if (start == end)
		return (true);
	if (s[start] != s[end])
		return (false);
	return (is_palindrome(s, start + 1, end - 1:));
}

int main(void)
{
	int r;
	char str[] = "mom";
	int len = strlen(str);
	bool is_palindrome_result;
	is_palindrome_result = is_palindrome(str, 0, len - 1);

	if (is_palindrome_result)
		printf("'%s' is a palindrome.\n", str);
	else
		printf("'%s' is not a palindrome.\n", str);
	return (0);
}

