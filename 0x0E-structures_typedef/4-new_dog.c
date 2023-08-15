#include "dog.h"
#include <string.h>
#include <stdlib.h>

/**
 * *new_dog- creats a new dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: null if fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;

	if (name == NULL || owner == NULL || age <= 0.0)
		return (NULL);
	new = malloc(sizeof(dog_t));
	if (new == NULL)
		return (NULL);
	new->name = malloc(strlen(name) + 1 *sizeof(char));
	if (new->name == NULL)
	{
		free(new);
		return (NULL);
	}
	new->owner = malloc(strlen(owner) + 1 *sizeof(char));
	if (new->owner == NULL)
	{
		free(new->name);
		free(new);
		return (NULL);
	}
	new->age = age;
	strcpy(new->name, name);
	strcpy(new->owner, owner);
	return (new);
}
