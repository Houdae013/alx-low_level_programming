#include "main.h"

/**
 * *string_nconcat- concatenates two strings
 * @s1: char
 * @s2: char
 * @n: unsigned int
 * Return: NULL if fail
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	int size1 = 0, size2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[size1] != '\0')
		size1++;
	while (s2[size2] != '\0')
		size2++;
	if (n >= (size2 + 1))
		p = malloc((size2 + size1 + 1) * sizeof(char));
	else
		p = malloc((n + size1 + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);
	return (p);
}
