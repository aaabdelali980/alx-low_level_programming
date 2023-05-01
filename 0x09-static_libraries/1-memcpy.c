#include "main.h"
/**
 * _memcpy - a function that copies memory area
 * @dest: input destination
 * @src: input source
 * @n: input integer
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int m = n;

	while (i < m)
	{
		*(dest + i) = *(src + i);
		n--;
		i++;
	}
	return (dest);
}
