#include "main.h"

/**
 * create_file - create a new file
 * @filename: given file
 * @text_content: content to add
 * Return: 1 on success, -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
	int file;
	size_t textLen = 0, bytesWritten;

	if (!filename)
		return (-1);

	file = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file < 0)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[textLen] != '\0')
			textLen++;

		bytesWritten = write(file, text_content, textLen);
		if (bytesWritten != textLen)
		{
			close(file);
			return (-1);
		}
	}
	close(file);
	return (1);
}
