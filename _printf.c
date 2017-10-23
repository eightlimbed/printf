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
	unsigned int i, j, count, special_mode;

	spec arr[] = {
		{"c", print_char}, {"s", print_string}, {"%", print_percent},
		{"d", print_dig}, {"i", print_int}, {NULL, NULL}
	};
	if (format == NULL)
		return (0);
	va_start(args, format);
	special_mode = 0, count = 0, i = 0;
	while (format[i])
	{
		if (format[i] == '%')
			special_mode = 1;
		if (special_mode)
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
		}
		if (!(special_mode))
		{
			_putchar(format[i]);
			count++;
		}
		else
			special_mode = 0;
		i++;
	}
	va_end(args);
	return (count);
}
