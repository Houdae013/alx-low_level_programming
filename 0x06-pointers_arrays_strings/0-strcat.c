#include "main.h"

/**
 * *_strcat- function that concatenates two strings
 * @dest: char
 * @src: char
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	while (*dest)
	{
		if (*dest == '\0')
		{
			while (*src)
			{
				*dest = *src;
				src++;
				dest++;
			}
			dest++;
			*dest = '\0';
			break;
		}
		dest++;
	}
	return (dest);
}
