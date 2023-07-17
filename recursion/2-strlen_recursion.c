#include "main.h"

/**
 * _strlen_recursion - give array lenght
 * @s: given array
 * Return: array lenght
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));

}
