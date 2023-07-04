#include "main.h"

/**
 * get_length - get string lenght
 * @s: given string
 * Return: string length
 */

int get_length(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + get_length(s + 1));
}

/**
 * is_palindrome_helper - check each char to determinate if palindrome or not
 * @s: given string
 * @start: string first char
 * @end: strinf last char
 * Return: if palindrome or not
 */

int is_palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
		return (1);

	if (s[start] != s[end])
		return (0);

	return (is_palindrome_helper(s, start + 1, end - 1));
}

/**
 * is_palindrome - print palindrome true or false
 * @s: given string
 * Return: true or false
 */

int is_palindrome(char *s)
{
	int length = get_length(s);

	return (is_palindrome_helper(s, 0, length - 1));
}
