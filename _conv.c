#include "main.h"

/**
 * binary_oct_hex_convert - into binary, octal or hexadecimal
 * @nume: given number to convert
 * @base: base number
 *
 * Return: number of character
 */
int binary_oct_hex_convert(unsigned int nume, int base, int flag)
{
	char hexup[] = "0123456789ABCDEF";
	char hexlow[] = "0123456789abcdef";
	char array[2021];
	char *ptr;
	int i = 2020, j = 0;

	ptr = &array[2020];
	*ptr = '\n';

	do {
		if (flag != 0)
			*--ptr = hexup[nume % base];
		else
			*--ptr = hexlow[nume % base];
		nume = nume / base;
		i--;
	} while (nume != 0);

	for (j = i; array[j] != 0; j++)
	{
		_putchar(array[j]);
	}
	return (2020 - i);
}
