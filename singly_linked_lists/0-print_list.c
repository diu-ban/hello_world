#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
 * print_node - Prints a single node in the linked list.
 * @node: Pointer to the node to be printed.
 */
void print_node(const list_t *node)
{
	if (node->str == NULL)
		printf("[0] (nil)\n");
	else
		printf("[%d] (%s)\n", node->len, node->str);
}

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: Pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_list(const list_t *h)
{
	const list_t *ptr = h;
	size_t nodes = 0;

	while (ptr != NULL)
	{
		print_node(ptr);
		ptr = ptr->next;
		nodes++;
	}
	return (nodes);
}
