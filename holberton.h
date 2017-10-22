#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_
#include <stdarg.h>
int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);
int print_dig(va_list args);
<<<<<<< HEAD
=======
int print_int(va_list args);
>>>>>>> 5b67997286c1caf2f6d9319c4be8b00458c69696

typedef struct {
	char *special;
	int (*f)(va_list args);
} spec;
#endif
