#ifndef MAIN_H
#define MAIN_H

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
} dog;

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
