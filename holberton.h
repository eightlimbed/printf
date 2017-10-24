#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_
#include <stdarg.h>
int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list args);
int print_string(va_list args);
int print_dig(va_list args);
int print_int(va_list args);
int print_binary(va_list args);
int print_unsigned(va_list args);
int parser(const char *format, va_list args);
int percent_controller(const char *format, va_list args, unsigned int i);

/**
 * struct op - represents prototype for pointer function struct
 * @special: represents character to be matched
 * @f: represents correlating function
 */
typedef struct op
{
	char *special;
	int (*f)(va_list args);
} spec;
#endif
