#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints the struct declared for dog
 *
 * @d: the struct type of new dog d
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", (d->name) ? d->name : "(nil)");
		printf("Age: %f\n", (d->age) ? d->age : 0);
		printf("Owner: %s\n", (d->owner) ? d->owner : "(nil)");
	}
}
