#include "main.h"

/**
 * *_strchr- locates a char in a string
 * @s: char
 * @c: char
 * Return: Returns a pointer to the first occurrence of the character c in the string s, or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (*s);
		else
			s++;
	}
	return (NULL);
}
