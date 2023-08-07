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

	if (!filename)
		return (0);

	file = open(filename, O_RDONLY);
	if (!file)
		return (0);

	buffer = malloc(letters * sizeof(filename));
	if (!buffer)
	{
		close(file);
		return (0);
	}

	readFile = read(file, buffer, letters);
	if (!readFile)
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
