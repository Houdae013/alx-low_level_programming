#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j = 0;

	for (i = 0; i < 9; i++)
	{
	while (j <= 8)
	{putchar('0' + i);
	putchar('1' + j);
	if (i < 8)
	{
	putchar(',');
	putchar(32); }
	j = j + 1; }
	}
	putchar('\n');
	return (0);
}
