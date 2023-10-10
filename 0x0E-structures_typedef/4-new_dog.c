#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - function that creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of the dog
 * Return: pointer to a new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int nl, kl, j;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	for (nl = 0; name[nl]; nl++)
		;
	nl++;
	dog->name = malloc(nl * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (j = 0; j < nl; j++)
		dog->name[j] = name[j];
	dog->age = age;
	for (kl = 0; owner[kl]; kl++)
		;
	kl++;
	dog->owner = malloc(kl * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (j = 0; j < kl; j++)
		dog->owner[j] = owner[j];
	return (dog);
}
