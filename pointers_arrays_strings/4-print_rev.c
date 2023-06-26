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
 * print_rev - print a string in reverse
 *
 * @s: function parameter
 */

void print_rev(char *s)
{
	int len = _strlen(s);
	int i;

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
