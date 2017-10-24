#include <stdarg.h>
#include "holberton.h"
/**
 * print_int - function will print any sized digit
 * @args: represents number of arguments passed from main
 * Return: function will return 1 upon successful compilation
 */

int print_int(va_list args)
{
	int x;
	int divisor;
	int count = 0;
	unsigned int num;
	unsigned int val;
	int retsize = 0;

	divisor = 1;
	x = va_arg(args, int);

	if (x < 0)
	{
		num = -1 * x;
		val = num;
		_putchar('-');
	}
	else
	{
		num = x;
		val = num;
	}
	for (; num / 10 > 0; count++)
	{
		num = num / 10;
		divisor = divisor * 10;
	}
	retsize = count + 1;
	while (count > 0)
	{
		_putchar(val / divisor + '0');
		val = val % divisor;
		divisor = divisor / 10;
		--count;
	}
	if (x < 0)
		retsize++;
	_putchar(val + '0');
	return (retsize);
}
