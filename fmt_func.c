#include "main.h"

/**
 * print_string - print string
 * @valist: list of argument
 *
 * Return: the number of characters
 */
int print_string(va_list valist)
{
	int i;
	char *ptr;

	ptr = (va_arg(valist, char *));
	if (ptr == 0)
		ptr = "(null)";
	for (i = 0; ptr[i] != 0; i++)
		_putchar(ptr[i]);
	return (i);
}

/**
 * print_char - print a char
 * @valist: list of argument
 *
 * Return: 1 if char or 0 if not
 */
int print_char(va_list valist)
{
	char c;

	c = (va_arg(valist, int));
	_putchar(c);
	return (1);
}

/**
 * print_percent - print percent
 * @valist: list of argument
 *
 * Return: 1
 */
int print_percent(__attribute__((unused)) va_list valist)
{
	_putchar('%');
	return (1);
}
