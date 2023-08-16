#include "main.h"

/**
 * _print_rev_recursion- prints a string in reverse
 * @s: char
 */

void _print_rev_recursion(char *s)
{
	char c;

	if (*s != '\0')
	{
		c = *s;
		 _print_rev_recursion(s + 1);
		 _putchar(c);
	}
	else
		_putchar('\0')
}
