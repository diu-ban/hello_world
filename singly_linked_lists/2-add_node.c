#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strlen - Returns the length of a string
 * @str: The string whose length is to be determined
 *
 * Return: The length of the string
 */
unsigned int _strlen(const char *str)
{
	unsigned int len = 0;
	int i = 0;

	if (str == NULL)
		return (len);
	while (str[i++])
	{
		len++;
	}
	return (len);
}

/**
 * add_node - Adds a new node at the beginning of a list_t list
 * @head: A double pointer to the head of the list
 * @str: The string to be duplicated and added to the list
 *
 * Return: The address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	if (head == NULL)
	{
		return (NULL);
	}
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
	new->next = *head;
	*head = new;
	return (new);
}
