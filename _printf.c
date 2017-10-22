#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "holberton.h"

/**
 * int _printf - produces output according to format
 * @format: pointer to input string
 *
 * Return: the number of characters printed (excluding null byte)
 */

int _printf(const char *format, ...)
{
	va_list args;
	unsigned int i, j, count, special_mode;

	spec arr[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{NULL, NULL}
	};

	/* NULL check on format */
	if (format == NULL)
		return (0);

	va_start(args, format);

	/* special_mode is a switch for when we come upon a '%' */
	special_mode = 0;
	count = 0;
	i = 0;
	while (format[i])
	{
		/* when we come upon a '%' we turn on special_mode */
		if (format[i] == '%')
			special_mode = 1;
		
		/* if special_mode is on, we cycle through the array of structs */
		if (special_mode)
		{
			j = 0;
			while (arr[j].special != NULL)
			{
				if (*(arr[j].special) == format[i + 1])
				{
					/* call the corresponding function and increment count by
					 * the return value of that function
					 */
					count += arr[j].f(args);
					/* increment i here to not print the 's' part of '%s'
					 * on the next loop around */
					i++;
				}
				j++;
			}
		}
		/* don't print the '%' if in special_mode */
		if (!(special_mode))
		{
			_putchar(format[i]);
			count++;
		}
		else
			/* turn special mode off if we were in special mode */
			special_mode = 0;
		i++;
	}
	va_end(args);
	return (count);
}
