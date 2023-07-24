#include "main.h"
#include <string.h>


/**
 * print_rev- prints a string in reverse
 * @s: char
 */

void print_rev(char *s)
{
	char c = *s;

	while (*s)
	{
		s++;
	}
	while (*s)
	{
		_putchar(c);
		s--;
	}
	_putchar('\n');
}
