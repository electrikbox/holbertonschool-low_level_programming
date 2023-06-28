#include "main.h"

/**
 * _strspn - count prefix substring
 *
 * @s: given string
 * @accept: givel letters
 *
 * Return: result
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int result = 0;
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				result += 1;
				break;
			}
		}
		if (accept[j] == '\0')
		{
			break;
		}
	}
	return (result);
}
