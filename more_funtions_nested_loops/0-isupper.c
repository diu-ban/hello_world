#include main.h

/**
 * _isupper - Checks if a character is an uppercase letter
 * @c: The character to check
 *
 * Description: This function takes an integer representing
 * an ASCII character and checks if it is an uppercase letter
 * (A-Z). It returns 1 if the character is uppercase, otherwise
 * it returns 0.
 *
 * Return: 1 if uppercase, 0 otherwise
 */
int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
	{
		return (1);
	}

	return (0);
}
