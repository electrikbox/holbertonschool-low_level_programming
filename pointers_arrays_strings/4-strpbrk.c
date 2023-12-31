#include "main.h"

/**
 * _strpbrk - new pointer start
 *
 * @s: given string
 * @accept: trigger string
 *
 * Return: new pointer adress
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i]; i++)
		for (j = 0; accept[j]; j++)
			if (s[i] == accept[j])
				return (&s[i]);
	return ('\0');
}
