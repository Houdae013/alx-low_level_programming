#include "main.h"

/**
 * rev_string- reverses a string
 * @s: char
 */

void rev_string(char *s)
{
	char *p = s;
	char c;


	while (*p)
	{
		p++;
	}
	p--;
	while (s < p)
	{
		c = *s;
		*s = *p;
		*p = c;
		s++;
		p--;
	}
}
		

	


