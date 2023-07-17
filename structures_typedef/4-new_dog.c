#include "dog.h"
#include <stdio.h>

/**
 * _strlen - give the array lenght
 *
 * @s: function parameter
 *
 * Return: return the lenght
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}

/**
 * _strcpy - copy string from src to dest
 *
 * @dest: destination
 *
 * @src: source
 *
 * Return: return destination
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - create a new dog
 * @name: given dog name
 * @age: given dog age
 * @owner: given owner name
 * Return: new struct pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);

	dog->name = malloc(_strlen(name) + 1);
	dog->owner = malloc(_strlen(owner) + 1);

	if (dog->name == NULL || dog->owner == NULL)
	{
		free(dog->name);
		free(dog->owner);
		free(dog);
		return (NULL);
	}

	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
