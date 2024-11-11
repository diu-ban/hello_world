#include "main.h"
#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - Creates a new dog with the given name, age, and owner
 * @name: Name of the dog (string)
 * @age: Age of the dog (float)
 * @owner: Owner of the dog (string)
 *
 * Return: A pointer to the newly created dog_t structure, or NULL
 *         if memory allocation fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;

	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
	{
		return (NULL);
	}
	if (name == NULL || name == "")
	{
		ptr->name = "(nil)";
	}
	else
		ptr->name = name;
	ptr->age = age;
	if (owner == NULL || owner == "")
	{
		ptr->owner = "(nil)";
	}
	else
		ptr->owner = owner;

	return (ptr);
}
