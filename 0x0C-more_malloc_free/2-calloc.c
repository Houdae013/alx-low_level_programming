#include "main.h"

/**
 * *_calloc- allocates memory for an array
 * @nmemb: nbr of elements
 * @size: size of elements
 * Return: NULL if nmemb or size is 0 or fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	else
	{
		p = malloc(nmemb * size);
		if (p == NULL)
			return (NULL);
		for (i = 0; i < nmemb * size; i++)
			p[i] = 0;
	}
	return (p);
}
