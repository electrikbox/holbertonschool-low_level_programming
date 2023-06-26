#include "main.h"

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
