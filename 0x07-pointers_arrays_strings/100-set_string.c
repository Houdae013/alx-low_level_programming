#include "main.h"

/**
 * set_string- sets the value of a pointer to a char
 * @s: char
 * @to: char
 */

void set_string(char **s, char *to)
{
	while (*s)
	{
		while (*to)
		{
			**s = *to;
			to++;
			(*s)++;
		}
		**s = '\0';
		(*s)++;
	}
}
