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
	int count = 0;
	unsigned int num;
	unsigned int val;
	int retsize = 0;

	divisor = 1; /** Begins breakdown of large number with division by 1 */
	n = va_arg(args, int);
	num = n; /** Allows greater val to be held */

	if (n < 0) /** If value passed is negative */
	{
		num = n * -1;
		val = num; /** Holds value of num while num is analyzed */
		_putchar('-');
	}
	else
		val = num;
	for (; num / 10 > 0; count++) /** Decides how big number is */
	{
		num = num / 10;
		divisor = divisor * 10; /** Increments divisor with each passing */
	}
	retsize = count + 1; /** Will return count of characters to main fxn */
	while (count > 0)
	{
		_putchar(val / divisor + '0');
		val = val % divisor;
		divisor = divisor / 10;
		--count;
	}
	if (n < 0)
		retsize++;
	_putchar(val + '0');
	return (retsize);
}
