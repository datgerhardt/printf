#include "main.h"

/**
 * get_print - get all necessary parameters to print a format
 * @format: characters
 * @valist: list of argument
 *
 * Return: the number of the characters
 */
int get_print(const char *format, va_list valist, pt_fmt pt_format[])
{
	int num_ch = 0, i = 0, j, k = 0, num = 0;

	for (i = 0; format && format[i] != 0; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			num_ch += 1;
		}
		else
		{
			for (j = 0; pt_format[j].fmt; j++)
			{
				if (format[i + 1] == pt_format[j].fmt[k])
				{
					num = pt_format[j].print(valist);
					num_ch += num;
					i++;
					break;
				}
			}
			if (pt_format[j].fmt == NULL && format [i + 1] != ' ')
			{
				if (format[i + 1] != 0)
				{
					_putchar(format[i]);
					_putchar(format[i + 1]);
					num_ch += 2;
					i++;
				}
				else
					return (-1);
			}
		}
	}
	if (format == NULL)
		return (-1);
	return (num_ch);
}
