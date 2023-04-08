#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - the func's purpose is reading
 *  & prnting txtf to the POSIX STD I/O
 * @filename: file's name to be read
 * @letters: letters' count to be printed
 *
 * Return: letter's count that were really displayed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int x;
	ssize_t lngthr, lngthw;
	char *ref;

	if (filename == NULL)
		return (0);
	x = open(filename, O_RDONLY);
	if (x == -1)
		return (0);
	ref = malloc(sizeof(char) * letters);
	if (ref == NULL)
	{
		close(x);
		return (0);
	}
	lngthr = read(x, ref, letters);
	close(x);
	if (lngthr == -1)
	{
		free(ref);
		return (0);
	}
	lngthw = write(STDOUT_FILENO, ref, lngthr);
	free(ref);
	if (lngthr != lngthw)
		return (0);
	return (lngthw);
}
