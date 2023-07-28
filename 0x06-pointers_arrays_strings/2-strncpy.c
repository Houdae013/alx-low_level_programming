#include "main.h"

/**
 * *_strncpy- copies a string
 * @dest: char
 * @src: char
 * @n: int
 * Return: return pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *p = dest;
	int i;

	for (i = 0; i < n; i++)
	{
		*dest = *src;
		src++;
		dest++;
	}
	return (p);
}
