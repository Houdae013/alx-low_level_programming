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
	int i, j, n, sum = 0;

	if (argc < 2)
		printf("0\n");
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (!isdigit(*argv[i]))
				{
					printf("Error\n");
					return (1);
				}
			}
				n = atoi(argv[i]);
				sum = sum + n;
		}	
		printf("%d\n", sum);
	}
	return (0);
}
