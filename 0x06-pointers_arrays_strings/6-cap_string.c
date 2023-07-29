#include "main.h"

/**
 * *cap_string- capitalizes all word of a string
 * @str: char
 * Return: char
 */

char *cap_string(char *str)
{
	char *p = str;

	while (*p)
	{
		if (*p <= 'z' && *p >= 'a')
		{
			p--;
			if (*p == ' ' || *p == '\t' || *p == '\n' || *p == '.' || *p == ',' || *p == ';' || *p == '!' || *p == '?' || *p == '"' || *p == '(' || *p == ')' || *p == '{' || *p == '}')
			{
				p++;
				*p = *p - 32;
			}
		}
		p++;
	}
	return (str);
}
