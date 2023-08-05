#include "main.h"

/**
 * *_strstr- locates a substring
 * @haystack: char
 * @needle: char
 * Return: a pointer to the beginning of the located located substring or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	char *p;


	while (*haystack)
	{
		if (*haystack == *needle)
		{
			p = haystack;
			while (*needle)
			{
				if (*needle == *haystack)
				{
					needle++;
					haystack++;
				}
				else
					return (NULL);
			}
			return (p);
		}
		haystack++;
	}
	return (NULL);
}

