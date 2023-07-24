#include "main.h"

/**
 * rev_string- reverses a string
 * @s: char
 */

void rev_string(char *s)
{
	int i = 0;
	char c;


	while (*s)
	{
		s++;
	}
	s--;
	while (*s)
	{
		c = *s;
		*s = s[i];
		s[i] = c;
	}
}
		

	


