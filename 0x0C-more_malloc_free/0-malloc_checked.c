#include "main.h"

/**
 * *malloc_checked- allocates memory using malloc
 * @b: unsigned int
 * Return: if malloc fails it cause normal process termination with a value 98
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit (98);
}
