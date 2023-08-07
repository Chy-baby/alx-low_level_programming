#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Study a text file and punch it to POSIX stdout.
 * @filename: An indicator to the name of the file.
 * @letters: The digit of characters the
 *           task shoul study and reprint.
 *
 * Return: If the outcome break down or filename is NULL - 0.
 *         O/w - the true digit of bytes the purpose can study and pull.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(o);

	return (w);
}
