#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j = 0;

	for (i = 0; i < 8; i++)
	{
	while (j <= 9)
	{putchar('0' + i);
	putchar('1' + j);
	if (i < 9)
	{
	putchar(',');
	putchar(32); }
	j = j + 1; }
	}
	putchar('0' + 89);
	putchar('\n');
	return (0);
}
