#include "main.h"

/**
 * _strlen- lenght of a string
 * @s: char
 * Return: 0
 */

int _strlen(char *s)
{
	int i = 0;

	*s = s[0];
	while (*s != '\0')
	{
		s++;
		i++;
	}
	return (i);
}
