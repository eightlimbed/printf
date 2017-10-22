#include <stdio.h>
#include "holberton.h"

int main(void)
{
	char c = '9';
	char *s = "Linds";
	char *name = "Lee";
	int b;
	int x;

	b = -9729345;
	x = _printf("%i\n", b);
	_printf("Hi %s, my name is %s.\nChar: %c\nPercent: %%\n", s, name, c);
	printf("count (echo $?) = %d\n", x);
	return (x);
}
