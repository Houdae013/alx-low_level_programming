#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int k, i, j = 0;

	for (k = 0; k < 8; k++)
	{
		for (i = 0; i < 9; i++)
	{
		j = i;
	while (j <= 8)
	{putchar('0' + k);
		putchar('0' + i);
	putchar('1' + j);
	if (k < 7)
	{
	putchar(',');
	putchar(32); }
	j = j + 1; }
	}
	}
	putchar('\n');
	return (0);
}
