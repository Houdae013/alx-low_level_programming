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

	if (nmemb == 0 || size == 0)
		return (NULL);
	else
	{
		p = malloc(nmemb * size);
		if (p == NULL)
			return (NULL);
	}
	return (p);
}
