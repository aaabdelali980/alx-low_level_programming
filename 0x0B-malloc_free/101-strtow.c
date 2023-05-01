#include "main.h"
#include <stdlib.h>
/**
 * count_word - a function that counts the number
 * of words in a string
 * @s: string to evaluate
 * Return: number of words
 */
int count_word(char *s)
{
	int f, count, w;

	f = 0;
	w = 0;

	for (count = 0; s[count] != '\0'; count++)
	{
		if (s[count] == ' ')
			f = 0;
		else if (f == 0)
		{
			f = 1;
			w++;
		}
	}
	return (w);
}
/**
 * **strtow - a function that splits a string into words
 * @str: string to split
 * Return: a pointer (success), or NULL (error)
 */
char **strtow(char *str)
{
	char **mat, *tmp;
	int i, j = 0, len = 0, words, c = 0, b, e;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);
	mat = (char **) malloc(sizeof(char *) * (words + 1));
	if (mat == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				e = i;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (b < e)
					*tmp++ = str[b++];
				*tmp = '\0';
				mat[j] = tmp - c;
				j++;
				c = 0;
			}
		}
		else if (c++ == 0)
			b = i;
	}
	mat[j] = NULL;
	return (mat);
}
