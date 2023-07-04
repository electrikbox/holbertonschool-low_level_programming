#include <stdio.h>
#include <stdlib.h>

/**
 * main - main program
 * @argc: argv lenght
 * @argv: parameter array
 * Return: result of multiplication of argv index 1 and 2
 */

int main(int argc, char *argv[])
{
	int result;

	if (argc < 3 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}

	result = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", result);

	return (0);
}
