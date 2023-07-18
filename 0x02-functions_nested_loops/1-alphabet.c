#include<stdio.h>
#include "main.h"

/**
 * 1-alphabet.c : prints the alphabet
 *
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
