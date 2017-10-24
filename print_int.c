#include <stdarg.h>
#include "holberton.h"
/**
 * print_int - function will print any sized digit
 * @args: represents number of arguments passed from main
 * Return: function will return 1 upon successful compilation
 */

int print_int(va_list args)
{
	int n = va_arg(args, int);
	unsigned int num, div;
	int chars_printed = 0;

	if (n < 0)
	{
		num = -n;
		_putchar('-');
		chars_printed++;
	}

	else
		num = n;

	div = 1;
	while (num / div > 9)
	{
		div = div * 10;
	}
	while (div > 0)
	{
		_putchar(num / div + '0');
		chars_printed++;
		num = num % div;
		div = div / 10;
	}
	return (chars_printed);
}
