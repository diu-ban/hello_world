#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position in a
 * doubly linked list.
 * @h: Double pointer to the head of the doubly linked list.
 * @idx: Index at which to insert the new node. Index starts at 0.
 * @n: Data to store in the new node.
 *
 * Return: Address of the new node, or NULL if it failed or insertion
 * at index is not possible.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *new, *tmp;
	if (h == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
		return (add_dnodeint(h, n));
	tmp = *h;
	while (tmp != NULL && i < idx - 1)
	{
		tmp = tmp->next;
		i++; 
	}
	if (tmp == NULL)
	{
		free(new);
		return (NULL);
	}
	if (tmp->next == NULL)
	{
		return(add_dnodeint_end(h, n));
	}

	new->next = tmp->next;
	new->prev = tmp;
	tmp->next->prev = new;
	tmp->next = new;
	return (new);
}
