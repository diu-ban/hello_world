#include "main.h"

/**
 * palin_len - Calculates the length of a string.
 * @s: The string to be measured.
 *
 * Return: The length of the string.
 */
int palin_len(char *s)
{
	if (*s == '\0')
	{
		return (1);
	}
	return (1 + palin_len(s + 1));
}

/**
 * palin_check - Recursively checks if a string is a palindrome.
 * @s: The string to check.
 * @len: The length of the string.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int palin_check(char *s, int len)
{
	if(len <= 1)
	{
		return (1);
	}
	if (*s != s[len - 1])
	{
		return (0);
	}
	return (palin_check(s + 1, len - 2));
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to check.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	int len = palin_len(s);
	return (palin_check(s, len));
}
