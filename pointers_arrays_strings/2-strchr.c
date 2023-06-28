#include "main.h"

/**
 * _strchr - move pointer start
 *
 * @s: given string
 * @c: char to find
 *
 * Return: new position or NULL
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s += i);
		}
	}
	return (0);
}
