#include <stdio.h>
#include "holberton.h"

int main(void)
{
	char c = '9';
	char *s = "Linds";
	char *name = "Lee";
	int n;
	int x;

<<<<<<< HEAD
	_printf("Negative:[%d]\n", -709209);
	_printf("Int size: %d\n", 645235);
=======
	n = 5;
	_printf("%d\n", n);
>>>>>>> 5b67997286c1caf2f6d9319c4be8b00458c69696
	x = _printf("Hi %s, my name is %s.\nChar: %c\nPercent: %%\n", s, name, c);
	printf("count (echo $?) = %d\n", x);
	return (x);
}
