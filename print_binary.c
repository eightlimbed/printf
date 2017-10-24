#include <limits.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * print_binary - prints the binary version of a decimal number
 * @args: unknown unsigned int argument
 *
 * Return: number of characters printed
 */

int print_binary(va_list args)
{
	int chars_printed = 0;
	unsigned int num = va_arg(args, unsigned int);
	int arr[sizeof(unsigned int) * 8 + 1];
	int i = 0;

	while (num > 0)
	{
		arr[i] = num % 2;
		num /= 2;
		i++;
	}

	i--;
	while (i >= 0)
	{
		_putchar(arr[i] + '0');
		chars_printed++;
		i--;
	}
	return (chars_printed);
}
