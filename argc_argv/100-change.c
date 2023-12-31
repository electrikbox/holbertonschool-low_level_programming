#include <stdio.h>
#include <stdlib.h>

/**
 * main - main program
 * @argc: argv lenght
 * @argv: array
 * Return: return min coins needed
 */

int main(int argc, char *argv[])
{
	int cents[6] = {25, 10, 5, 2, 1};
	int result = 0;
	int arg;
	int i, j;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}

	if (atoi(argv[1]) <= 0)
	{
		printf("0\n");
		return (0);
	}

	arg = atoi(argv[1]);

	while (arg != 0)
	{
		for (j = 0; cents[j] != '\0'; j++)
		{
			if (arg >= cents[j])
			{
				result += 1;
				arg -= cents[j];
				break;
			}
		}
		i++;
	}

	printf("%d\n", result);
	return (0);
}
