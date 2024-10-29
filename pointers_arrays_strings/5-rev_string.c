#include "main.h"

/**
 * rev_string - Reverses a string in place
 * @s: Pointer to the string to be reversed
 *
 * Description: This function takes a string as input and reverses
 *              it in place, modifying the original string.
 */
void rev_string(char *s)
{
	int len = 0;
	int count = 0;
	char *cp_str[500];

	while (s[len] != '\0')
	{
		cp_str[len] = s[len];
		len++;
	}
	cp_str[len] = '\0';

	while (count < len)
	{
		s[count] = cp_str[len - count - 1];
		count++;
	}
	s[len] = '\0';
}
