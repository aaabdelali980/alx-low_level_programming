#include "main.h"
#include <string.h>

/**
 * _strlen - a function that returns the length of a string
 * @s: string input
 * Return: length
 */

int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		l++;
		s++;
	}
	return (l);
}
