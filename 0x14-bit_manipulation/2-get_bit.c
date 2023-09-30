#include "main.h"

/**
* get_bit - returns the value of a bit at a given index
* @n: unsigned long int
* @index: the index
* Return: the value of the bit at the index or -1 if an error
*/

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int nbr;

	nbr = sizeof(n) * 8;
	if (index > nbr)
	{
		return (-1);
	}
	return ((n >> index) & 1);
}
