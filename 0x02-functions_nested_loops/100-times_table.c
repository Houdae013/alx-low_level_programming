#include "main.h"

/**
 * print_times_table - checks for lower
 *@n: int
 * On error: return 0
 * Return: 1 if success
 */
void print_times_table(int n)
{
	int a, b, c;

	if (n <= 15 && n > 0)
	{
		for (a = 0; a <= n; a++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(32);
		for (b = 1; b <= n; b++)
		{
			c = (a * b);
			if ((c / 10) > 0)
			{
				_putchar((c / 10) + '0');
			}
			else
			{
				_putchar(32);
			}
			_putchar((c % 10) + '0');

			if (b < n)
			{
				_putchar(',');
				_putchar(32);
			}
		}
		_putchar('\n');
	}
	}
}
