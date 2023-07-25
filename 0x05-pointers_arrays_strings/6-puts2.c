#include "main.h"

/**
 * puts2- prints char
 * @str: string
 */

void puts2(char *str)
{
	char c;

	while (*str)
	{
		c = *str;
		if (c % 2 == 0)
			_putchar(c);
		str++;
	}
	_putchar('\n');
}
