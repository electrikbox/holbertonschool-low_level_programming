#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the opcode of main function
 * @argc: argv len
 * @argv: arguments
 * Return: opcodes
*/
int main(int argc, char **argv)
{
	int i, num;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	num = atoi(argv[1]);

	if (num < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < num; i++)
	{
		printf("%02hhx", *((char *) main + i));
		if (i < num - 1)
			printf(" ");
		else
			printf("\n");
	}

	return (0);
}
