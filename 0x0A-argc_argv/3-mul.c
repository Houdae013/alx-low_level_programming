#include<stdio.h>
#include<stdlib.h>

/**
 * main- entry point
 * @argc: int nbr
 * @*argv: char
 * Return: 1
 */

int main(int argc, char *argv[])
{
	int i, n, mul = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			n = atoi(argv[i]);
			mul = mul * n;
		}
		printf("%d\n", mul);
	}
	return (0);
}
