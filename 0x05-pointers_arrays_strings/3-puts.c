#include "main.h"

/**
 * _puts- prints a string
 * @str: string
 */

void _puts(char *str)
{
	int i;
	
	while (*str)
	{
		printf("%c", *str);
		str++;
	}
	printf("\n");
}
