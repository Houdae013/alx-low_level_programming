#include "main.h"

/**
 * print_rev- prints a string in reverse
 * @s: char
 */

void print_rev(char *s)
{
	int i = length - 1;
	char c = *s;

	*s = s[i];
	while (*s)
	{
		_putchar(c);
		*s--;
	}
	_putchar('\n');
}
