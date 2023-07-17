#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - main program
 * @argc: argv lenght
 * @argv: parameter array
 * Return: return result of addition of all argv id digit
 */

int main(int argc, char *argv[])
{
	int i, j;
	int result = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}

		result += atoi(argv[i]);
	}

	printf("%d\n", result);

	return (0);
}
