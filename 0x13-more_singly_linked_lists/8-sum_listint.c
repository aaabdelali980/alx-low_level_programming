#include "lists.h"
/**
 * sum_listint -  a function that returns the sum of all
 * the data (n) of a listint_t linked list
 * @head: a pointer to the head of the list
 * Return: if the list is empty, return 0
 * otherwise - the sum of all the data.
 */
int sum_listint(listint_t *head)
{
	int s = 0;

	while (head)
	{
		s = s + head->n;
		head = head->next;
	}
	return (s);
}
