#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * _strlen - Calculates the length of a string.
 * @str: The string whose length is to be determined.
 *
 * Return: The length of the string.
 */
unsigned int _strlen(const char *str)
{
	unsigned int len = 0;
	if (str == NULL)
		return (len);
	while(str[len])
		len++;
	return (len);
}

/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: A double pointer to the head of the list.
 * @str: The string to be duplicated and added to the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *tmp;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = _strlen(str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		tmp = *head;
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = new;
	}
	return (new);
}
