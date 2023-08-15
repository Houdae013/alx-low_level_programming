#include "dog.h"
#include "main.h"

/**
 * init_dog- initialize a variable of type struct dog
 * @d: ptr to struct dog
 * @name: ptr to name
 * @age: age
 * @owner: ptr to owner
 *
 * Description: fct that initialize a dog struct
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
