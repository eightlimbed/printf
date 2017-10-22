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
	char *s = va_arg(args, char *);
	unsigned int count = 0;
	
	if (s == NULL)
		return (0);

	while (*s != '\0')
	{
		_putchar(*s);
		s++;
		count++;
	}
	return (count);
}
