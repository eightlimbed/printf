#include <stdlib.h>
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
	int chars_printed;

	if (format == NULL)
		return (-1);

	va_start(args, format);
	chars_printed = parser(format, args);
	va_end(args);
	return (chars_printed);
}
