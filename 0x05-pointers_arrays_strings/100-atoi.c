#include "main.h"

/**
 * _atoi- convert a string to an integer
 * @s: char
 * Return: 0
 */

int _atoi(char *s)
{
	int count = 0;
	int sign = 1;
	
	while(*s)
	{
		if ( *s == 45)
		{
			sign = -sign;
		}
		else if (*s <= '9' && *s >= '0')
		{
			count = count * 10 + (*s - 48);
		}
		s++;
	}
	if (count == 0 || count == 1)
	{
		return (0);
	}
	else if (sign == -1)
	{
		return (-count);
	}
	else
	{
		return (count);
	}
}
