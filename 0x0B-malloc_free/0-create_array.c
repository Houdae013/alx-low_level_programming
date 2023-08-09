#include "main.h"

/**
 * *create_array- creates an array of chars, and initializes it with a char
 * @size: unsigned int
 * @c: char
 * Return: a pointer to the array or if size is zero or it fails
 */

char *create_array(unsigned int size, char c)
{
	char *p, *o;

	if (size != 0)
		{
			p = malloc(size * sizeof(char));
			*o = p;
			while (*p)
			{
				*p = c;
				p++;
			}
			return (o);
		}
	else
		return (NULL);
}
