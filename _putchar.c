#include "main.h"

/**
 * _putchar - writes the character
 * @c: char to print
 *
 * Return: 1 success or -1 error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
