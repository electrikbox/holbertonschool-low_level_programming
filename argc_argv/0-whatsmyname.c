#include <stdio.h>
#include <stdlib.h>

/**
 * main - return argv at index 1 : the program name
 * @argc: argv array lenght
 * @argv: array
 * Return: program name (index 1 of argv)
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
