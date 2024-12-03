#include "lists.h"

/**
 * sum_dlistint - Calculates the sum of all the data (n) in a dlistint_t list.
 * @head: Pointer to the head of the doubly linked list.
 *
 * Return: The sum of all the data (n) in the list. If the list is empty,
 * return 0.
 */
int sum_dlistint(dlistint_t *head)
{
	if (head == NULL)
	  return (0);
	return (head->n + sum_dlistint(head->next));
}
