#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * strtow - seperate words
 * @str: given string
 * Return: new pointer to array
*/
char **strtow(char *str)
{
    char **words;
    int word_count = 0;
    int i = 0, j = 0, len = 0;

     if (str == NULL || *str == '\0')
        return (NULL);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
            word_count++;
    }

    words = malloc((word_count + 1) * sizeof(char *));
    
    if (words == NULL)
        return NULL;
    
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ')
        {
            if (len == 0 || str[i - 1] == ' ')
            {
                int word_len = 0;
                int k = i;

                while (str[k] != ' ' && str[k] != '\0')
                {
                    word_len++;
                    k++;
                }

                words[j] = malloc((word_len + 1) * sizeof(char));
                if (words[j] == NULL)
                {
                    for (i = 0; i < j; i++)
                        free(words[i]);
                    free(words);
                    return NULL;
                }

                strncpy(words[j], &str[i], word_len);
                words[j][word_len] = '\0';
                j++;
            }

            len++;
        }
    }

    words[j] = NULL;
    return words;
}
