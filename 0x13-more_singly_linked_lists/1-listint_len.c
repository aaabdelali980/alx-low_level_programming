#include <stdio.h>
#include "lists.h"
/**
 * listint_len - returns the number of elements
 * @h: a pointer to the head
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t node = 0;

	while (h)
	{
		node++;
		h = h->next;
	}
	return (node);
}
