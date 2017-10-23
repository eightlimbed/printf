#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "holberton.h"

/**
 * _printf - produces output according to format
 * @format: pointer to input string
 *
 * Return: the number of characters printed (excluding null byte)
 */

int _printf(const char *format, ...)
{
	va_list args;
	unsigned int i, j, count;
	spec arr[] = {{"c", print_char}, {"s", print_string}, {NULL, NULL} };

	if (format == NULL)
		return (-1);
	va_start(args, format);
	count = i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			j = 0;
			while (arr[j].special != NULL)
			{
				if (*(arr[j].special) == format[i + 1])
				{
					count += arr[j].f(args);
					i++;
				}
				j++;
			}
			if (arr[j].special == NULL)
			{
				if (format[i] == '%' && format[i + 1] != '%')
				{
					_putchar('%');
					count++;
				}
			}
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
		i++;
	}
	va_end(args);
	return (count);
}
