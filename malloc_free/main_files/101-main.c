#include "../main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_tab - Prints an array of string
 * @tab: The array to print
 *
 * Return: nothing
 */
void print_tab(char **tab)
{
    int i;

    for (i = 0; tab[i] != NULL; ++i)
    {
        printf("%s\n", tab[i]);
    }
}

/**
 * main - check the code
 *
 * Return: 1 if an error occurred, 0 otherwise
 */
int main(void)
{
    char **tab;
    int i;

    tab = strtow("      Best School         #cisfun      ");
    if (tab == NULL)
        return (0);

    print_tab(tab);

    for (i = 0; tab[i] != NULL; i++)
        free(tab[i]);
    free(tab);

    return (0);
}
