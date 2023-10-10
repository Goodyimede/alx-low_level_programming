#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure of a dog
 *
 * @name: name of dog
 * @age: age of dog
 * @owner: the owner of the dog
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

#endif
