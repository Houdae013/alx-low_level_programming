#include "main.h"
#include <string.h>


/**
 * print_rev- prints a string in reverse
 * @s: char
 */

void print_rev(char *s)
{
	char c = *s;

	
	*s = s[strlen(str) - 1];
	while (*s)
	{
		_putchar(c);
		s--;
	}
	_putchar('\n');
}
