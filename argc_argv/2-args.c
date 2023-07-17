#include <stdio.h>
#include <stdlib.h>

/**
 * main - main program
 * @argc: argv lenght
 * @argv: parameter array
 * Return: return all parameter line by line
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
