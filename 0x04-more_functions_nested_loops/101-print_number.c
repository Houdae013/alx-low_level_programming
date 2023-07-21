#include "main.h"

/**
 *  print_number- print number
 *  @n: int
 *  Return: 0
 */

void print_number(int n)
{
	int p = n;


	if (n < 0)
	{
		_putchar('-');
		p = -n;
	}
	if (p / 10 > 0)
		print_number(p / 10);
	_putchar('0' + p % 10);
}
