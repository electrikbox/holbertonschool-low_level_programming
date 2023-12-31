#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>

/**
 * struct dog - structure ti init dog information (owner, age, name)
 * @name: the dog name
 * @age: the dog age
 * @owner: the dog owner
*/
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
