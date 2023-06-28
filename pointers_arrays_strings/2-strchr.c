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
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (s += i);
		}
		i++;
	}
	return 0;
}