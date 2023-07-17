#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int nvl, acl, counter;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	for (nvl = 0; name[nvl]; nvl++)
		;
	nvl++;
	dog->name = malloc(nvl * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (counter = 0; counter < nvl; counter++)
		dog->name[counter] = name[counter];
	dog->age = age;
	for (acl = 0; owner[acl]; acl++)
		;
	acl++;
	dog->owner = malloc(acl * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (counter = 0; counter < acl; counter++)
		dog->owner[counter] = owner[counter];
	return (dog);
}
