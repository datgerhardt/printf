#include "main.h"

/**
 * print_digit - print integers
 * @valist: list of argument
 *
 * Return: digit
 */
int print_digit(va_list valist)
{
	unsigned int a;
	int i = 0; 
	int k = 0; 
	int n = 0; 
	int count = 0;

	n = va_arg(valist, int);
	if (n <= INT_MAX && n >= INT_MIN)
	{
		if (n < 0)
		{
			n *= -1;
			_putchar('-');
			count += 1;
		}
		a = n;
		for (k = 0; (a / 10) > 0; k++)
			a /= 10;

		a = n;
		while (k != 0)
		{
			for (i = 0; i < k; i++)
				a /= 10;
			a %= 10;
			_putchar(a + '0');
			count++;
			k--;
			a = n;
		}
		_putchar(a % 10 + '0');
		count++;
	}
	else
	{
		return (-1);
	}

	return (count);
}
