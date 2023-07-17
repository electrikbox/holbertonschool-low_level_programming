#include "dog.h"
#include <stdio.h>

/**
 * init_dog - inititalize a dog struct with given name, age and owner
 * @d: given structure
 * @name: given dog name
 * @age: given dog age
 * @owner: given owner name
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
