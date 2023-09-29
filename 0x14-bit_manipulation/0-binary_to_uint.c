#include "main.h"

/**
 * power- calculates the power of an integer
 * @n: the base integer that we will calculate it's power
 * @i: the exponent
 * Return: the result
 */

unsigned int power(int n, int i)
{
	unsigned int r = 1;
	int j;

	for (j = 0; j < i; j++)
	{
		r = r * n;
	}
	return (r);
}

/**
 * binary_to_uint- converts binary to an unsigned int
 * @b: a pointer to the binary number
 * Return: the converted number, or 0 if there is one or more
 * chars in the string b that is not 0 or 1 or if b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int d = 0;
	int i = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (*b != '\0')
	{
		if (*b != '1' && *b != '0')
		{
			return (0);
		}
		b++;
	}
	b--;
	while (*b != '\0')
	{
		if (*b == '1')
		{
			d = d + power(2, i);
		}
		i++;
		b--;
	}
	return (d);
}
