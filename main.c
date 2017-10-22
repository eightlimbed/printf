#include <stdio.h>
#include "holberton.h"

int main(void)
{
	char c = '9';
	char *s = "Linds";
	char *name = "Lee";
	int x;

	_printf("Negative:[%d]\n", -709209);
	_printf("Int size: %d\n", 645235);
	x = _printf("Hi %s, my name is %s.\nChar: %c\nPercent: %%\n", s, name, c);
	printf("count (echo $?) = %d\n", x);
	return (x);
}
