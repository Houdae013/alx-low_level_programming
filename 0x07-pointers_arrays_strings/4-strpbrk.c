#include "main.h"

/**
 * *_strpbrk- searches a string for any of a set of bytes
 * @s: char
 * @accept: char
 * Return: pointer to the byte in s or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s++)
	{
		while (*accept++)
		{
			if (*s == *accept)
				return (*s);
		}
	}
	return (*s);
}
