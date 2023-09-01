#include "main.h"

/**
 * power- calculates the power of an integer
 * @b: the base integer that we will calculate it's power
 * @i: the exponent
 * Return: the result
 */

unsigned int power(int n, int i)
{
	unsigned int r = 0;
	int j;

	for (j = 0; j < i; j++)
	{
		r = n * i;
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
	int i, n = strlen(b);

	for (i = 0; i < n; i++)
	{
		if (b[n - i - 1] != '0' && b[n - i - 1] != '1' && b[n - i - 1] == NULL)
			return (0);
		d = (b[n - i - 1] - '0') * power(2, i);
	}
	return (d);
}
