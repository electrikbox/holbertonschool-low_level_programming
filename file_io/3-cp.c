#include "main.h"

/**
 * printError - print error function
 * @message: wanted mesage without spec
 * @spec: spec to give
 * @errorCode: error number
*/
void printError(const char *message, const char *spec, int errorCode)
{
	if (spec != NULL)
		dprintf(STDERR_FILENO, "%s %s\n", message, spec);
	else
		dprintf(STDERR_FILENO, "%s\n", message);
	exit(errorCode);
}

/**
 * main - main program to copy file
 * @argc: argument length
 * @argv: arguments
 * Return: 0
*/
int main(int argc, char **argv)
{
	int file, readFile, copy;
	char *buffer[1024];

	if (argc != 3)
		printError("Usage: cp file_from file_to", NULL, 97);

	file = open(argv[1], O_RDONLY);
	if (file < 0)
		printError("Error: Can't read from file", argv[1], 98);

	copy = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);

	while ((readFile = read(file, buffer, 1024)) > 0)
		if (write(copy, buffer, readFile) != readFile || copy < 0)
			printError("Error: Can't write to", argv[2], 99);

	if (readFile < 0)
		printError("Error: Can't read from file", argv[1], 98);

	if (close(file) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file);
		exit(100);
	}

	if (close(copy) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", copy);
		exit(100);
	}
	return (0);
}
