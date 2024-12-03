#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Frees a linked list
 * @head: Pointer to the head of the list
 *
 * Description: Recursively frees all nodes and their associated data
 * in a list_t linked list.
 */
void free_list(list_t *head)
{
	if (head == NULL)
		return;
	free_list(head->next);
	free(head->str);
	free(head);
}
