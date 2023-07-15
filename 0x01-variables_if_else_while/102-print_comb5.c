#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int l, k, i, j = 0;

	for (k = 0; k <= 9; k++)
	{
		for (i = 0 + 1; i < 9; i++)
		{
		
		j = k;
		l = i + 1;
	while (j <= 9)
	{while (l <= 9)
		{
		putchar('0' + k);
		putchar('0' + i);
		putchar(32);
		putchar('0' + j);
	putchar('0' + l);
	 
	if (k < 7)
	{
	putchar(',');
	putchar(32); }
	l = l + 1; }		
	j = j + 1; }
	}
	}
	putchar('\n');
	return (0);
}
