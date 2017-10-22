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
	unsigned int val;
	unsigned int num;

	divisor = 1; /** Begins breakdown of large number with division by 1 */
	n = va_arg(args, int);
	num = n; /** Gives temporary buffer for value passed */

	if (n < 0) /** If value passed is negative */
	{
		num = -n;
		val = num;
		_putchar('-');
	}
	else /** If value passed is positive */
		val = num;
	for (count = 0; num / 10 > 0; count++) /** Loops through number of numbers */
	{
		num = num / 10;
		divisor = divisor * 10; /** Increments divisor with each passing */
	}
	while (count > 0)
	{
		_putchar(val / divisor + '0');
		val = val % divisor;
		divisor = divisor / 10;
		--count;
	}
	_putchar(val + '0'); /** To convert from ASCII */
	return (1);
}
