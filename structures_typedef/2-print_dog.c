#include "main.h"
#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - Prints details of a struct dog
 * @d: Pointer to struct dog
 *
 * Description: Prints the name, age, and owner of the dog.
 * If any element is NULL, it prints "(nil)" instead of
 * the NULL value.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	printf("Name: %s\n", (d->name) != NULL ? d->name : "(nil)");
	printf("Age: %7.6f\n", d->age);
	printf("Owner: %s\n", (d->owner) != NULL ? d->owner : "(nil)");
}
