#include "main.h"

/**
 * print_diagonal- print diagonal
 * @n: int
 * Return: 0
 */

void print_diagonal(int n)
{
	int i = 1, j;

	if (n >= 0)
	{
		_putchar('\n');
		while (i < n)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
