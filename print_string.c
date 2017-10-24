#include <stdarg.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * print_string - prints a string
 * @args: argument passed from va_list
 *
 * Return: number of characters printed
 */

int print_string(va_list args)
{
	/* create pointer to the argument */
	char *s = va_arg(args, char *);
	unsigned int count = 0;

	if (s == NULL)
		s = "(null)";

	while (*s != '\0')
	{
		_putchar(*s);
		count++;
		s++;
	}

	/* return the length of the string */
	return (count);
}
