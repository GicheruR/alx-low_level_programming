#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: is the string to be printed
 * _putchar - prints a new line
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}

