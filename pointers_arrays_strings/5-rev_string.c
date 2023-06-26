#include "main.h"

/**
 * _strlen - get string lenght
 *
 * @s: function parameter
 *
 * Return: string lenght
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
 * rev_string - reverse given string
 *
 * @s: function parameter
 */

void rev_string(char *s)
{
	int length, i;
	char *begin, *end, temp;

	length = _strlen(s);
	begin = s;
	end = s;

	for (i = 0; i < length - 1; i++)
		end++;

	for (i = 0; i < length / 2; i++)
	{
		temp = *end;
		*end = *begin;
		*begin = temp;

		begin++;
		end--;
	}
}
