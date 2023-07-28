#include "main.h"

/**
 * _strcmp- compares two strings
 * @s1: char
 * @s2: char
 * Return: int
 */

int *_strcmp(char *s1, char *s2)
{
	int diff;
	while (*s1 && *s2)
	{
		if (*s1 == *s2)
		{
			s1++;
			s2++;
		}
		else
			return (diff = *s1 - *s2);
	}
}
