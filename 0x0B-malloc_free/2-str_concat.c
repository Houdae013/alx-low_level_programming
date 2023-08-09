#include "main.h"

/**
 * *str_concat- concatenates two strings
 * @s1: char
 * @s2: char
 * Return:on failure NULL and on success a pointer
 */

char *str_concat(char *s1, char *s2)
{
	char *p;
	int i, size1, size2;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	while (s1[size1] != '\0')
		size1++;
	while (s2[size2] != '\0')
		size2++;
	p = malloc((size1 + size2 + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < size1; i++)
		p[i] = s1[i];
	for (i = 0; i <= size2; i++)
		p[i + size1] = s2[i];
	return (p);
}
