#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * read_textfile - Reads a text file and prints
  * @filename: variable pointer
  * @letters: size of letters
  * Description: Write function that reads and prints text file
  * to the POSIX standard output.
  * Return: actual num of letters could read and print, 0 otherwise
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file, let, w;
	char *text;

	text = malloc(letters);
	if (text == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == -1)
	{
		free(text);
		return (0);
	}

	let = read(file, text, letters);

	w = write(STDOUT_FILENO, text, let);

	close(file);

	return (w);
}
