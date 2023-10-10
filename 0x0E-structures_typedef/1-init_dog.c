#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - the new dog structure initialization
 *
 * @d: pointer to struct of new dog
 * @name: name of new dog
 * @age: age of new dog
 * @owner: the owner of the new dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
