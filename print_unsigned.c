#include "holberton.h"
/**
 * print_unsigned - prints an unsigned decimal number
 * @args: unknown argument coming from _printf
 *
 * Return: number of characters printed
 */

int print_unsigned(va_list args)
{
	int chars_printed = 0;
	unsigned int num = va_arg(args, unsigned int);
	int div = 1;

	while (num / div > 9)
	{
		div *= 10;
	}

	while (div > 0)
	{
		_putchar(num / div + '0');
		chars_printed++;
		num %= div;
		div /= 10;
	}
	return (chars_printed);
}
