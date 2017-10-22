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
		{"d", print_dig},
		{"i", print_int},
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
				/* since format[i] = '%' we want to look at the next character
				 * which is format[i + 1]
				 */
				if (*(arr[j].special) == format[i + 1])
				{
					/* this line will call the corresponding function and 
					 * increment count by the return value of that function
					 */
					count += arr[j].f(args);
					/* increment i here to not print the 's' part of '%s'
					 * on the next loop around */
					i++;
				}
				j++;
			}
		}

		/* if format[i] isn't a '%' just print the char as usual and increment
		 * count by 1 */
		if (!(special_mode))
		{
			_putchar(format[i]);
			count++;
		}

		/* turn special mode off if we were in special mode */
		else
			special_mode = 0;
		i++;
	}
	va_end(args);
	return (count);
}
