#include "lists.h"
/**
 * free_listint2 - free a lisint_t list
 * @head: a pointer of the head of the list
 */
void free_listint2(listint_t **head)
{
	listint_t *l;

	if (head == NULL)
		return;
	while (*head)
	{
		l = (*head)->next;
		free(*head);
		*head = l;
	}
	head = NULL;
}
