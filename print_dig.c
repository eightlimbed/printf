#include <stdarg.h>
#include "holberton.h"
/**
 * print_dig - function will print any sized digit
 * @args: represents number of arguments passed from main
 * Return: function will return 1 upon successful compilation
 */

int print_dig(va_list args)
{
	int n;
	int divisor;
	int count;
	unsigned int num;
	unsigned int val;
	int rtsize;

	count = 0;
	divisor = 1;
	n = va_arg(args, int);
	num = n;

	if (n < 0)
	{
		num = n * -1;
		val = num;
		_putchar('-');
		count++;
	}
	else
		val = num;
	for (; num / 10 > 0; count++)
	{
		num = num / 10;
		divisor = divisor * 10;
	}
	rtsize = count;
	while (count > 0)
	{
		_putchar(val / divisor + '0');
		val = val % divisor;
		divisor = divisor / 10;
		--count;
	}
	_putchar(val + '0');
	return (rtsize);
}
