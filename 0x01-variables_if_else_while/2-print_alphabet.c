#include <stdio.h>

/**
 * main - main function
 *
 * Return: always 0
 */

int main(void)
{
	char letter;

	letter = 'a';
	while (letter != '{')
	{
		putchar (letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
