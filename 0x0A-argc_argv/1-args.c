#include<stdio.h>

/**
 * main- entry point
 * @argc: int nbr
 * @argv: char
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", --argc);
	return (0);
}
