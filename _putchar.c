#include <unistd.h>
#include "holberton.h"

/**
 * _putchar - writes a character to stdout
 * @c: character
 *
 * Return: 1 (success), -1 (error)
 */

int _putchar(char c)
{
	/* writes 1 byte from the address of c to stdout (file descriptor 1) */
	return (write(1, &c, 1));
}
