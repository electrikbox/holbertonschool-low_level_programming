#include "main.h"

/**
 * read_textfile - write a part of file
 * @filename: given file
 * @letters: number of letters to print
 * Return: number of written letters
*/
size_t read_textfile(const char *filename, size_t letters)
{
	int file, readFile, writeFile;
	char *buffer;

	if (filename == 0)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == 0)
		return (0);

	buffer = malloc(letters * sizeof(filename));
	if (buffer == NULL)
	{
		close(file);
		return (0);
	}

	readFile = read(file, buffer, letters);
	if (readFile == 0)
	{
		free(buffer);
		close(file);
		return (0);
	}

	writeFile = write(STDOUT_FILENO, buffer, readFile);
	if (!writeFile || writeFile != readFile)
	{
		free(buffer);
		close(file);
		return (0);
	}

	free(buffer);
	close(file);

	return (readFile);
}
