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

/**
 * puts_half - print half string
 *
 * @str: function parameter
 */

void puts_half(char *str)
{
	int half, lenght;
	int index = 0;

	lenght = _strlen(str);

	if (lenght % 2 == 0)
		half = lenght / 2;
	else
		half = (lenght - 1) / 2;

	while (*str != '\0')
	{
		if (index >= half)
		{
			_putchar(*str);
		}
		str++;
		index++;
	}
	_putchar('\n');
}
