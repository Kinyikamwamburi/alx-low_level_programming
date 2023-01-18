#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - main function
 * @d: to be initialized
 * @name: Element name
 * @age: Element age
 * @owner: Element owner
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
