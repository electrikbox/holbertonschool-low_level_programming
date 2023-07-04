#include <stdio.h>
#include <stdlib.h>

/**
 * main - main program
 * @argc: parameter count
 * @argv: parameter array
 * Return: return argc (argv lenght)
 */

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);

	return (0);
}
