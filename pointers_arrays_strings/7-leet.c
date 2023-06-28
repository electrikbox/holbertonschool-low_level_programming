#include "main.h"

/**
 * leet - replace some letters by numbers
 * @s: given string
 * Return: return new sting
 */

char *leet(char *s)
{
	char letterMin[] = "aeotl";
	char letterMax[] = "AEOTL";
	char number[] = "43071";
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (letterMin[j] == s[i] || letterMax[j] == s[i])
			{
				s[i] = number[j];
				break;
			}
		}
	}
	return (s);
}
