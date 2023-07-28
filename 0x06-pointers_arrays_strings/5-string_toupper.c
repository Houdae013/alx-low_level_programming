#include "main.h"

/**
 * *string_toupper- changes all lowercase letters to uppercase
 * Return: char
 */

char *string_toupper(char *str)
{
	char *p;
	
	
	while (*p)
	{
		if (*p <= 122 && *p >= 97)
		{
			*p = *p - 32;
			p++;
		}
	else
		p++;
	}
	return (str);
}
