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

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n >= strlen(s2))
		p = malloc((strlen(s2) + strlen(s1) + 1) * sizeof(char));
	else
		p = malloc((n + strlen(s1) + 1) * sizeof(char))
	if (p == NULL)
		return (NULL);
	return (p);
}
