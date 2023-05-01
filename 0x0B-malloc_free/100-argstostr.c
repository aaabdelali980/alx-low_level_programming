#include "main.h"
#include <stdlib.h>

/**
 * argstostr - a function that concatenates all the arguments
 * of your program
 * @ac: the number of arguments
 * @av: array name
 * Return: a pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	char *s;
	int ar, b, i, size = ac;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (ar = 0; ar < ac; ar++)
	{
		for (b = 0; av[ar][b]; b++)
			size++;
	}
	s = malloc(sizeof(char) * size + 1);

	if (s == NULL)
		return (NULL);
	i = 0;

	for (ar = 0; ar < ac; ar++)
	{
		for (b = 0; av[ar][b]; b++)
			s[i++] = av[ar][b];
		s[i++] = '\n';
	}
	s[size] = '\0';
	return (s);
}
