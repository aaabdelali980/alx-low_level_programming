#include <stdio.h>
#include "main.h"
/**
 * _putchar - a function that writes the character
 * @c: the character
 * Return: 1 or -1
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
