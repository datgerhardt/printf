#include "main.h"

/**
 * print_binary_conv - convert a number to binary
 * @valist: list of argument
 *
 * Return: number of character
 */
int print_binary_conv(va_list valist)
{
	int num_size = 0, number = 0, base = 2, flag = 0;

	number = va_arg(valist, unsigned int);
	num_size = binary_oct_hex_convert(number, base, flag);
	return (num_size);
}

/**
 * print_oct - convert to octal
 * @valist: list of argument
 *
 * Return: number of character
 */
int print_oct(va_list valist)
{
	int num_size = 0, number = 0, base = 8, flag = 0;

	number = va_arg(valist, unsigned int);
	num_size = binary_oct_hex_convert(number, base, flag);
	return (num_size);
}

/**
 * print_hex_low - convert into hexadecimal lowercase
 * @valist: list of argument
 *
 * Return: number of character
 */
int print_hex_low(va_list valist)
{
	int num_size = 0, number = 0, base = 16, flag = 0;

	number = va_arg(valist, unsigned int);
	num_size = binary_oct_hex_convert(number, base, flag);
	return (num_size);
}

/**
 * print_hex_upper - convert into hexadecimal uppercase
 * @valist: list of argument
 *
 * Return: number of character
 */
int print_hex_upper(va_list valist)
{
	int num_size = 0, number = 0, base = 16, flag = 1;

	number = va_arg(valist, unsigned int);
	num_size = binary_oct_hex_convert(number, base, flag);
	return (num_size);
}

/**
 * print_unsig_int - convert to unsigned integer
 * @valist: list of argument
 *
 * Return: number of character
 */
int print_unsig_int(va_list valist)
{
	unsigned int m, num;
	int i, k, count = 0;

	num = va_arg(valist, unsigned int);
	if (num == 0)
	{
		_putchar(num + '0');
		count++;
	}
	else if (num > UINT_MAX)
	{
		m = num - UINT_MAX - 1;
		_putchar(m + '0');
		count++;
	}
	else if (num <= UINT_MAX)
	{
		m = num;
		for (k = 0; (m / 10) > 0; k++)
			m /= 10;
		m = num;
		while (k != 0)
		{
			for (i = 0; i < k; i++)
				m /= 10;
			m %= 10;
			_putchar(m + '0');
			count++;
			k--;
			m = num;
		}
		_putchar(m % 10 + '0'), count++;
	}
	else
	{
		m = (UINT_MAX + 1) - num;
		_putchar(m + '0'), count++;
	}
	return (count);
}
