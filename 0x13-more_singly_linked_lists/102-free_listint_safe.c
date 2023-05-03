#include "lists.h"

/**
 * free_list2 - frees a linked list
 * @head: head of a list.
 *
 * Return: no return.
 */
void free_list2(list_t **head)
{
	list_t *tmp;
	list_t *cur;

	if (head != NULL)
	{
		cur = *head;
		while ((tmp = cur) != NULL)
		{
			cur = cur->next;
			free(tmp);
		}
		*head = NULL;
	}
}

/**
 * free_listint_safe - frees a linked list.
 * @h: head of a list.
 * Return: size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t nodes = 0;
	list_t *ptr, *new, *add;
	listint_t *cur;

	ptr = NULL;
	while (*h != NULL)
	{
		new = malloc(sizeof(list_t));
		if (new == NULL)
			exit(98);

		new->p = (void *)*h;
		new->next = ptr;
		ptr = new;
		add = ptr;

		while (add->next != NULL)
		{
			add = add->next;
			if (*h == add->p)
			{
				*h = NULL;
				free_list2(&ptr);
				return (nodes);
			}
		}

		cur = *h;
		*h = (*h)->next;
		free(cur);
		nodes++;
	}

	*h = NULL;
	free_list2(&ptr);
	return (nodes);
}
