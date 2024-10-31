#include "main.h"

/**
 * leet - Encodes a string into 1337 (leet) format.
 * @s: The string to be modified.
 *
 * Description: Converts specific letters into leet speak:
 *              - 'A' or 'a' to '4'
 *              - 'E' or 'e' to '3'
 *              - 'O' or 'o' to '0'
 *              - 'T' or 't' to '7'
 *              - 'L' or 'l' to '1'
 *
 * Return: A pointer to the modified string.
 */
char *leet(char *s)
{
	char key[] = "AaEeOoTtLl";
	char val[] = "4433007711";
	int i;
	int j;

	for (i = 0; i != '\0'; i++)
	{
		for (j = 0; key[j] != '\0'; j += 2)
		{
			if (s[i] == key[j] || s[i] == key[j+1])
			{
				s[i] = val[j];
				break;
			}
		}
	}

	return (s);
}
