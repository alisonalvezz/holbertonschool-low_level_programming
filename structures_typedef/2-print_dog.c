#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints a dog
 * @d: d
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	printf("Age: %f\n", d->age);
	printf("Name: %s\n", d->name ? d->name : "(nil)");
	printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}

