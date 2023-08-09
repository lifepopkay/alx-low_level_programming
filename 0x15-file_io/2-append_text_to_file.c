#include "main.h"

/**
 * append_text_to_file - creates a file
 * @filename: filename.
 * @text_content: content writed in the file.
 *
 * Return: 1 if it success. -1 if it fails.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int writtenFile;
	int numOfLetters = 0;

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (numOfLetters = 0; text_content[numOfLetters]; numOfLetters++)
		;
	}

	writtenFile = write(fd, text_content, numOfLetters);
	if (writtenFile == -1)
		return (-1);


	close(fd);
	return (1);
}
