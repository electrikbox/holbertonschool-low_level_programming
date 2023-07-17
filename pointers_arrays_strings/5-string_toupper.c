#include "main.h"

/**
 * string_toupper - set all lowercase to uppercase
 *
 * @s: function parameter
 *
 * Return: string changed to upper
 */

char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
		i++;
	}
	return (s);
}
