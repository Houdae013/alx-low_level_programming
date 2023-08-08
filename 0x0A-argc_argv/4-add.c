#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

/**
 * main- entry point
 * @argc: int nbr
 * @argv: char
 * Return: 1
 */

int main(int argc, char *argv[])
{
	int i, n, sum = 0;

	if (argc < 1)
		printf("0\n");
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (!isdigit(*argv[i]))
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				n = atoi(argv[i]);
				sum = sum + n;
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
