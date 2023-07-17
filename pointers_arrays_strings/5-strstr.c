#include "main.h"

/**
 * _strstr - search word in sentence
 *
 * @haystack: given sentence
 * @needle: given word
 *
 * Return: new ptr adress
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i]; i++)
	{
		int temp = i;

		for (j = 0; needle[j]; j++)
		{
			if (haystack[temp] != needle[j])
			{
				break;
			}
			else
			{
				temp++;
			}
		}
		if (!needle[j])
		{
			return (&haystack[i]);
		}
	}
	return ('\0');
}
