#include "main.h"

/**
 * puts2- prints char
 * @str: string
 */

void puts2(char *str)
{
	char c;
	char *p = str;
	int n, i = 0;

	while (*p)
	{
		p++;
		i++;
	}
	n = i;
	for (i = 0; i < n; i++)
	{
		c = *str;
		if (i % 2 == 0)
			_putchar(c);
		str++;
	}
	_putchar('\n');
}
