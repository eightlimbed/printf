#include "holberton.h"
/**
 * print_octal - prints the octal representation of a decimal number
 * @args: unknown argument coming from _printf
 *
 * Return: number of characters printed
 */

int print_octal(va_list args)
{
	int chars_printed = 0;
	unsigned int num = va_arg(args, unsigned int);
	int arr[sizeof(int) * 8 + 1];
	int i = 0;

	if (num < 8)
	{
		_putchar(num + '0');
		chars_printed++;
		return (chars_printed);
	}

	else
	{
		while (num > 8)
		{
			arr[i] = num % 8;
			num /= 8;
			i++;
		}

		if (num < 8)
			arr[i] = num;

		while (i >= 0)
		{
			_putchar(arr[i] + '0');
			chars_printed++;
			i--;
		}
	}
	return (chars_printed);
}
