#include "main.h"

/**
 * *cap_string- capitalizes all word of a string
 * @str: char
 * Return: char
 */

char *cap_string(char *str)
{
	char *p = str;

	if (*p <= 'z' && *p >= 'a')
		*p = *p - 32;
	while (*p)
	{
		if (*p < 'A' || (*p < 'a' && *p > 'Z') || *p > 'z')
		{
			p++;
			if (*p <= 'z' && *p >= 'a')
				*p = *p - 32;
		}
		p++;
	}
	return (str);
}
