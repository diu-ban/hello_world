#include "lists.h"

/**
 * list_len - Returns the number of elements in a linked list.
 * @h: Pointer to the head of the list.
 *
 * Description: Iterates through a linked list to count its elements.
 * Return: The number of nodes in the list.
 */
size_t list_len(const list_t *h)
{
	size_t size = 0;
	list_t *ptr = h;

	while (ptr != NULL)
	{
		size++;
		ptr = ptr->next;
	}
	return (size);
}
