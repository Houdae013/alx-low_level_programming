#include "main.h"

/**
 * puts_half- prints half of a string
 * @str: string
 */

void puts_half(char *str)
{
	int i = 0, d = 0;
	char *c = str;

	while (*c)
	{
		c++;
		i++;
	}
	while (d <= (i - 1) / 2)
	{
		str++;
		d++;
	}
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
