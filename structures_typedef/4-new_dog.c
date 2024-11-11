#include "main.h"
#include "dog.h"
#include <stdlib.h>

/**
 * _str_len - calculates the length of a string manually
 * @str: the string whose length is to be calculated
 *
 * Return: the length of the string
 */
int _strlen(char *str)
{
	int len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

/**
 * new_dog - creates a new dog.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 *
 * Return: pointer to the new dog struct or NULL if it fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;
	int len1, len2, i;

	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
	{
		return (NULL);
	}

	len1 = _strlen(name);
	len2 = _strlen(owner);

	ptr->name = malloc(len1 + 1);
	if (ptr->name == NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr->owner = malloc(len2 + 1);
	if (ptr->owner == NULL)
	{
		free(ptr->name);
		free(ptr);
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		ptr->name[i] = name[i];
	}
	ptr->name[i] = '\0';

	for (i = 0; i < len2; i++)
	{
		ptr->owner[i] = owner[i];
	}
	ptr->owner[i] = '\0';

	ptr->age = age;
	return (ptr);
}
