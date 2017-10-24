#include <stdlib.h>
#include "holberton.h"

/**
 * parser - parses the arguments of _printf and calls corresponding function if
 * format specifiers were entered.
 * @format: string entered into _printf
 * @args: optional arguments from _printf
 *
 * Return: number of characters printed
 */

int parser(const char *format, va_list args)
{
	unsigned int i, chars_printed;

	chars_printed = i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			chars_printed += percent_controller(format, args, i);
			i++;
			if (format[i] == 0)
				return (-1);
		}
		else
		{
			_putchar(format[i]);
			chars_printed++;
		}
		i++;
	}
	return (chars_printed);
}
