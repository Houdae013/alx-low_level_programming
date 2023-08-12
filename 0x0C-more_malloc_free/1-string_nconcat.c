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
	char *res;
	unsigned int i = 0, j = 0, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	if (n < len2)
		res = malloc(sizeof(char) * (len1 + n + 1));
	else
		res = malloc(sizeof(char) * (len1 + len2 + 1));

	if (!res)
		return (NULL);

	while (i < len1)
	{
		res[i] = s1[i];
		i++;
	}

	while (n < len2 && i < (len1 + n))
		res[i++] = s2[j++];

	while (n >= len2 && i < (len1 + len2))
		res[i++] = s2[j++];

	res[i] = '\0';

	return (res);
}
