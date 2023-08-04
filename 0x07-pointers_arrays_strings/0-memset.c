#include "main.h"

/**
 * *_memset- fills memory with a constant byte
 * @s: char *
 * @b: char
 * @n: unsigned int
 */

char *_memset(char *s, char b, unsigned int n)
{
	for (i = 0; i < n; i++)
	{
		*s = b;
		b++;
	}
	return (*s);
}	
