#include <stdio.h>
#include "holberton.h"

int main(void)
{
	char *s = "World";
	int x;

	x = _printf("hello, %s\n", s);
	return (x);
}
