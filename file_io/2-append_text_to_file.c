#include "main.h"

/**
 * append_text_to_file - append text in file
 * @filename: given file
 * @text_content: text to add
 * Return: 1 on success, -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	size_t textLen = 0, bytesWritten;

	if (!filename)
		return (-1);

	file = open(filename, O_RDWR | O_APPEND);
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
