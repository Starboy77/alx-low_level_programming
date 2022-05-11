#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes the dog struct
 * @d: pointer to struct
 * @name: name of dog
 * @age: age of dog
 * @owner: owner name
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
