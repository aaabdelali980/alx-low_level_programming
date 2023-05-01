#include <stdlib.h>
#include "main.h"
/**
 * create_array - a function that creates an array of char,
 * and initializes it with a specific char
 * @size: the size of the array
 * @c: char input
 * Return: NULL or pointer
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	arr = malloc(sizeof(char) * size);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		arr[i] = c;
	return (arr);
}
