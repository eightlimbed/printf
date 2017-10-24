#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
#define BUF 1000

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
	int arr[BUF];
	int i = 0;

	printf("num = %d\n", num);
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
