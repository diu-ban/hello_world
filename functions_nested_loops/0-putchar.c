#include "main.h"

/**
 * main - Entry point of the program
 *
 * Description: This program prints "_putchar" followed by a new line using
 *              the custom _putchar function.
 *
 * Return: Always 0 (Success)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
