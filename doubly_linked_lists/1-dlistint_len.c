#include "lists.h"
#include <stddef.h>

/**
 * dlistint_len - Returns the number of elements in a dlistint_t list.
 * @h: Pointer to the head of the doubly linked list.
 *
 * Return: The number of elements in the list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *ptr;
	size_t len = 0;

	if (h == NULL)
		return (len);
	ptr = h;
	while (ptr != NULL)
	{
		len++;
		ptr = ptr->next;
	}
	return (len);
}
