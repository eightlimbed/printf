#include <stdarg.h>
#include "holberton.h"

/**
 * print_percent - prints a '%'
 * @args: argument passed from va_list
 *
 * Return: 1 if printed, 0 otherwise
 */

int print_percent(va_list args)
{
	/* chars get promoted to ints when using va_arg */
	char c = va_arg(args, int);

	if (c == '\0')
		return (0);

	_putchar('%');
	return (1);
}
