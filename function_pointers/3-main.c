#include "3-calc.h"
#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function that print result of operation
 * @argc: arguments lenght
 * @argv: arguments
 * Return: result of operation
*/
int main(int argc, char **argv)
{
	int num1, num2;
	int (*calc)(int, int);

	if (argc != 4)
	{
		printf("Error 98\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	calc = get_op_func(argv[2]);

	if ((calc == NULL) || (argv[2][1] != '\0'))
	{
		printf("Error 99\n");
		exit(99);
	}

	if ((*argv[2] == '/' || *argv[2] == '%') && (num1 == '0' || num2 == '0'))
	{
		printf("Error 100\n");
		exit(100);
	}

	printf("%d\n", calc(num1, num2));

	return (0);
}
