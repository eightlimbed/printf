#include "holberton.h"
#include <stdarg.h>
/**
 * print_int - function will print an int upon passing
 * @args: represents arguments to be printed
 * Return: function will return length of string
 */

int print_int(va_list args)
{
	/** Same function called to print an int as a digit */
	int x;
	int divisor;
	int count = 0;
	unsigned int num;
	unsigned int val;
	int retsize = 0;

	divisor = 1; /** Begins breakdown of large number with division by 1 */
	x = va_arg(args, int);
	num = x; /** Allows greater val to be held */

	if (x < 0) /** If value passed is negative */
	{
		num = -x;
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
	if (x < 0)
		retsize++;
	_putchar(val + '0'); /** To convert from ASCII */
	return (retsize);
}
