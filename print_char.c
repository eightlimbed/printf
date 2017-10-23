#include <stdlib.h>
#include <stdarg.h>
#include "holberton.h"

/**
 * print_char - prints a character
 * @args: argument passed from va_list
 *
 * Return: 1 if printed, 0 otherwise
 */

int print_char(va_list args)
{
	if (args == NULL)
		return (0);
	/* chars get promoted to ints when using va_arg */
	_putchar(va_arg(args, int));
	return (1);
}
