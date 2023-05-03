#include "lists.h"
/**
 * pop_listint - a function that deletes the head node
 * of a listint_t linked list
 * @head: a pointer
 * Return:  the head node’s data (n).
 * otherwise - if the linked list is empty return 0
 */
int pop_listint(listint_t **head)
{
	listint_t *l;
	int r;

	if (*head == NULL)
		return (0);
	l = *head;
	r = (*head)->n;
	*head = (*head)->next;

	free(l);
	return (r);
}
