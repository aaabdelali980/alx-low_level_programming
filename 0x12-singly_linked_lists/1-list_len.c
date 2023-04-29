#include "lists.h"
/**
 * list_len - finds the number of elements
 * @h: the linked list_t list
 *
 * Return: the number of elements
 */
size_t list_len(const list_t *h)
{
	size_t elem = 0;

	while (h)
	{
		elem++;
		h = h->next;
	}
	return (elem);
}
