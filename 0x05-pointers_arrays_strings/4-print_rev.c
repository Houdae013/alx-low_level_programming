#include "main.h"
#include <string.h>


/**
 * print_rev- prints a string in reverse
 * @s: char
 */

void print_rev(char *s)
{
	char c;
	int i = 0;


	c = s[i];
	while (*s)
	{
		s++;
		i++;
	}
	i = i - 1;
	while (i >= 0)
	{
		_putchar(c);
		i--;
	}
	_putchar('\n');
}
