#include "main.h"

/**
 * _strcmp- compares two strings
 * @s1: char
 * @s2: char
 * Return: int
 */

int _strcmp(char *s1, char *s2)
{
	int diff = 0;
	int i = 0;


	while (*s1 && *s2)
	{
		if (*s1 == *s2)
		{
			s1++;
			s2++;
			i++;
		}
		else
		{
			diff = s1[i + 1] - s2[i + 1];
			return (diff);
		}

	}
	return (0);
}
