#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Deletes the node at a given index in a doubly 
 * linked list.
 * @head: A pointer to the head of the doubly linked list.
 * @index: The index of the node to be deleted, starting from 0.
 *
 * Return: 1 if the deletion was successful, -1 if it failed (e.g., invalid 
 * index or an empty list).
 *
 * Description: This function deletes a node at a given index in a doubly 
 * linked list. It handles cases such as:
 *   - Deleting the head node
 *   - Deleting a node in the middle or at the end of the list
 *   - If the index is out of range or the list is empty, it returns -1
 *   - Updates the `next` and `prev` pointers of adjacent nodes accordingly
 *     to maintain the list's integrity.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head;
	unsigned int i = 0;

	if (head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = tmp->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
		free(tmp);
		return (1);
	}
	while (tmp != NULL && i < index)
	{
		tmp = tmp->next;
		i++;
	}
	if (tmp == NULL)
		return (-1);
	if (tmp->next != NULL)
		tmp->next->prev = tmp->prev;
	tmp->prev->next = tmp->next;
	free(tmp);
	return (1);
}
