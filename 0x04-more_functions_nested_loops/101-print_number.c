#include "main.h"

/**
 *  print_number- print number
 *  @n: int
 *  Return: 0
 */

void print_number(int n)
{
	if (n >= 1000)
	{
		_putchar('0' + n / 1000);
	}
	else if (n >= 100)
	{
		_putchar('0' + n / 100);
	}
	else if (n >= 10)
	{
		_putchar('0' + n / 10);
	}
	_putchar('0' + n % 10);
	_putchar('\n');
}
