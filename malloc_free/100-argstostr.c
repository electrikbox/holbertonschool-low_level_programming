#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - concatenate args
 * @ac: argv lenght
 * @av: args strings 
 * Return: new array.
 */
char *argstostr(int ac, char **av)
{
	char *newArray;
	int i, j, count = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		for (j = 0; av[i][j] != '\0'; j++)
			count += 1;

	newArray = malloc(sizeof(char) * (count + ac + 1));

	if (newArray == NULL)
		return (NULL);

	count = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			newArray[count] = av[i][j];
			count++;
		}
		newArray[count] = '\n';
		count++;
	}
	newArray[count] = '\0';

	return (newArray);
}
