#include "dog.h"
#include <stdio.h>

/**
* free_dog - deallocate memory for structer created
* @d: given struct
*/
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
