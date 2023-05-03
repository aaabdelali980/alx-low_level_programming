#include "lists.h"
#include <stdio.h>
/**
 * free_list - frees a linked list
 * @head: head of a list.
 * Return: no return.
 */
void free_list(list_t **head)
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
 * print_listint_safe - prints a linked list.
 * @head: head of a list.
 * Return: number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes = 0;
	list_t *ptr, *new_node, *add;

	ptr = NULL;
	while (head != NULL)
	{
		new_node = malloc(sizeof(list_t));

		if (new_node == NULL)
			exit(98);

		new_node->p = (void *)head;
		new_node->next = ptr;
		ptr = new_node;
		add = ptr;

		while (add->next != NULL)
		{
			add = add->next;
			if (head == add->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_list(&ptr);
				return (nodes);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		nodes++;
	}

	free_list(&ptr);
	return (nodes);
}
