#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "main.h"
/**
 * main - a program that adds positive numbers
 * @argc: number of command line arguments
 * @argv: array name
 * Return: 1 or 0
 */
int main(int argc, char *argv[])
{
	int i, j, len, sum;
	char *p;

	if (argc < 2)
		printf("0\n");
	else
	{
		sum = 0;
		for (i = 1; i < argc; i++)
		{
			p = argv[i];
			len = strlen(p);

			for (j = 0; j < len; j++)
			{
				if (isdigit(*(p + j)) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum = sum + atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
