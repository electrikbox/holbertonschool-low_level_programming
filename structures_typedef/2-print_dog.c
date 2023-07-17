#include "dog.h"
#include <stdio.h>

/**
 * print_dog - print all dog structure infos in STDOUT
 * @d: given dog structure
*/
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	printf("Name: %s\n", d->name == NULL ? "(nil)" : d->name);

	if (d->age < 0.0f)
		printf("Age: (nil)\n");

	else
		printf("Age: %f\n", d->age);

	printf("Owner: %s\n", d->owner == NULL ? "(nil)" : d->owner);
}
