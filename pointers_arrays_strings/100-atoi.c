#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to be converted.
 *
 * Description: The function takes a string containing characters, signs,
 *              and numbers. It skips non-numeric characters at the start
 *              but takes into account multiple '-' or '+' signs, using
 *              the last sign to determine the final result's sign.
 *              Conversion stops once non-numeric characters appear after
 *              numbers.
 * 
 * Return: The integer value of the first number sequence in the string.
 *         Returns 0 if no numbers are found.
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int started = 0;

	while (*s != '\0')
	{
		if ((*s == '-') && (!started))
		{
			sign *= -1;
		}
		else if ((*s == '+') && (!started))
		{
			sign *= 1;
		}

		if ((*s >= '0') && (*s <= '9'))
		{
			started = 1;

			if ((sign == 1) && (result > (2147483647 - (*s - '0')) / 10))
			{
				return (2147483647);
			}
			else if ((sign == -1) && (result < (-2147483648 + (*s - '0')) / 10))
			{
				return (-2147483648);
			}
			else 
			{
				result = result * 10 + (*s - '0');
			}
		}
		else if (started)
		{
			break;
		}

		s++;
	}

	return (sign == 1) ? result : -result;
}
