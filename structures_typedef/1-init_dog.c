#include "dog.h"
#include <stdio.h>

/**
 * init_dog - initializes variables
 * @name: name of the dog
 * @owner: owner of the dog
 * @age: age of the dog
 * @d: d
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
