#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * wordCount - count word len
 * @str: given string
 * Return: word len
*/
int wordCount(char *str)
{
	int i, count = 0;

	if (!str)
		return (0);

	for (i = 0; str[i] != '\0'; i++)
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
			count++;

	return (count);
}

/**
 * strtow - seperate words
 * @str: given string
 * Return: new pointer to array
*/
char **strtow(char *str)
{
	char **words;
	int i, iCopy, j = 0, len, word_len;

	if (str == NULL || *str == '\0')
		return (NULL);

	words = malloc((wordCount(str) + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	for (i = 0, len = 0; str[i] != '\0'; i++, len++)
	{
		if (str[i] != ' ' && (len == 0 || str[i - 1] == ' '))
		{
			word_len = 0;

			for (iCopy = i; str[iCopy] != ' ' && str[iCopy] != '\0'; iCopy++)
				word_len++;

			words[j] = malloc((word_len + 1) * sizeof(char));
			if (words[j] == NULL)
			{
				for (iCopy = 0; iCopy < j; iCopy++)
					free(words[iCopy]);
				free(words);
				return (NULL);
			}

			strncpy(words[j], &str[i], word_len);
			words[j][word_len] = '\0';
			j++;
		}
	}
	words[j] = NULL;
	return (words);
}
