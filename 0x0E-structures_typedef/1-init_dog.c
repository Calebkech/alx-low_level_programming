#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Initializes a variable of type struct dog.
 * @d: Pointer to struct dog to initialize.
 * @name: Pointer to name of dog.
 * @age: Age of dog.
 * @owner: Pointer to owner's name.
 *
 * Description: This function initializes a struct dog with the given name, age, 
 * and owner values.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));

	d->name = name;
	d->age = age;
	d->owner = owner;
}
