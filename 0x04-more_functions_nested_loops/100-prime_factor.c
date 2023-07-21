#include <stdio.h>

/**
 * main- int main
 * Return: 0
 *
 */

int main(void)
{
	int i, p = 0, g = 0;
	int n = 612852475143;

	while (n > 1)
	{
		for (i = 2; i <= n; i++)
		{
			if (n % i == 0)
			{
				p = i;
				n = n / i;
			}
			if (p >= g)
				g = p;
		}
	}
}
