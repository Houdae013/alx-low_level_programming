#include "main.h"

/**
 * *_strdup-  a pointer to an allocated space,contains a copy of the string
 * @str: char
 * Return: NULL if str = NULL if insufficient memory was available or pointer
 */

char *_strdup(char *str)
{
	int i, size = 0;
	char *p;
	if (str == NULL)
		return (NULL );
	while (str[size] != '\0')
	{
		size++;
	}
	p = malloc((size + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);
	for (i = 0; i <= size; i++)
	{
		p[i] = str[i];
	}
	return (p);
}
