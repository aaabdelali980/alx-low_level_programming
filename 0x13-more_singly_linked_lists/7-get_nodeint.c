#include "lists.h"
/**
 * get_nodeint_at_index - a function that returns the nth node
 * of a listint_t linked list
 * @head: a pointer to th head of the list
 * @index: the index of the node
 * Return: if the node does not exist, return NULL
 * otherwise - the located node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int nod = 0;

	while (nod < index)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;

		nod++;
	}
	return (head);
}
