#include "main.h"

/**
 * leet - replace some letters by numbers
 * @s: given string
 * Return: return new sting
 */

char *leet(char *s)
{
	char letter[] = "aeotlAEOTL";
	char number[] = "43071";
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; letter[j] != '\0'; j++)
		{
			if (letter[j] == s[i] || letter[j + 5] == s[i])
			{
				s[i] = number[j];
				break;
			}
		}
	}
	return (s);
}
