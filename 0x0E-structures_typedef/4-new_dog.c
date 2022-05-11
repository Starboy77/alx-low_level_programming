#include <stdio.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: struct pointer
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t ndog, *pdog;

	pdog = &ndog;
	if (pdog != NULL)
	{
		pdog->name = name;
		pdog->age = age;
		pdog->owner = owner;
	}
	return (pdog);
}
