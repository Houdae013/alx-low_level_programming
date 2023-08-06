#include "main.h"

/**
 * _puts_recursion- prints a string followed by a new line
 * @s: char
 */

void _puts_recursion(char *s)
{
	char c;

	if (*s != '\0')
	{
		c = *s;
		_putchar(c);
		_puts_recursion(char *s++);
	}
}
