#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of a list
 * @head: a pointer
 * @n: integer
 * Return: NULL if the function fails
 * otherwise the address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_elem;

	new_elem = malloc(sizeof(listint_t));
	if (new_elem == NULL)
		return (NULL);

	new_elem->n = n;
	new_elem->next = *head;

	*head = new_elem;

	return (new_elem);
}
