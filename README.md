# _printf
#### [Holberton School ](http://holbertonschool.com)Low Level Programming Assignment 0x10. C - printf
##### Inspired by [`printf`](http://clc-wiki.net/wiki/C_standard_library:stdio.h:printf) from the C Standard Library
---
### Prototype
#### `int _printf(const char *format, ...)`
---
### Usage
- Include `holberton.h`
- Call the function: `_printf` passing in a string and optional arguments
- Use format specifiers for desired output.
### Format Specifiers
File Name | Description | Format Specifier
--- | --- | ---
`print_char.c` | Prints a character | `%c`
`print_string.c` | Prints a string | `%s`
`print_digit.c` | Prints a decimal number | `%d`
`print_int.c` | Prints an integer | `%i`
`print_binary.c` | Prints the binary version of an unsigned integer | `%b`
### Example Usage
- `_printf("Hello, world\n")` *prints "Hello, world" followed by a new line*
- `_printf("Hello %s", "Linds")` *prints "Hello, Linds"*
- `_printf("%d\n", 123)` *printf the decimal number, 123 followed by a new line*
- `_printf("%c", 'x')` *prints the character 'x'*
### Files
File Name | Description
--- | ---
`_printf.c` | Produces output according to format
`_putchar.c` | Writes a character (1 byte) to stdout
`holberton.h` | Header file with function prototypes and struct
`parser.c` | Parses the arguments of `_printf` and calls corresponding function
`percent_controller.c` | Controls flow when a '%' is found in format 
