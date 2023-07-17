#include "main.h"

/**
 * cap_string - capitalize first char of each word
 * @s: given string
 * Return: string capitlized
 */

char *cap_string(char *s)
{
	char specialChar[] = " \t\n,;.!?\"(){}";
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			if (i == 0)
			{
				s[i] -= 32;
			}
			else
			{
				for (j = 0; specialChar[j] != '\0'; j++)
				{
					if (specialChar[j] == s[i - 1])
					{
						s[i] -= 32;
						break;
					}
				}
			}
		}
	}
	return (s);
}
