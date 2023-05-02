#include "lists.h"
/**
 * free_listint - frees a listint_t list
 * @head: the head of the list
 */
void free_listint(listint_t *head)
{
	listint_t *l;

	while (head)
	{
		l = head->next;
		free(head);
		head = l;
	}
}
