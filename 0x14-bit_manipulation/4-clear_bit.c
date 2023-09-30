#include "main.h"

/**
* clear_bit - sets the value of a bit to 0 at a given index
* @n: ptr to an unsigned long int
* @index: the index
* Return: 1 if it worked -1 if error
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int p = 1;

	if (n == NULL || index > sizeof(n) * 8)
	{
		return (-1);
	}
	if (((*n >> index) & p) == 1)
	{
		p = p << index;
		*n = *n ^ p;
	}
	return (1);
}
