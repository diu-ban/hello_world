#ifndef dog_h
#define dog_h

/**
 * struct dog - Represents a dog with name, age, and owner information
 * @name: Name of the dog (string)
 * @age: Age of the dog (float)
 * @owner: Owner of the dog (string)
 *
 * Description: This struct holds information about a dog's name, age,
 * and owner. It is used to create instances of `dog_t`.
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
}dog_t;

#endif
