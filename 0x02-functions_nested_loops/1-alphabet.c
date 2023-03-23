#include "main.h"

/**
 * print_alphapet - print all alphabet in lowercase
 */
void print_alphapet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
	_putchar('\n');
}
