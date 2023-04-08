#include "main.h"

/**
 * create_file - the func's prpse is creating a txtf
 * @filename: that's the textf
 * @text_content: the txtf's content
 *
 * Return: 1 if successful. -1 otherwise
 */
int create_file(const char *filename, char *text_content)
{
	int x, count, w_r1;

	if (!filename)
		return (-1);

	x = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (x == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (count = 0; text_content[count]; count++)
		;

	w_r1 = write(x, text_content, count);

	if (w_r1 == -1)
		return (-1);

	close(x);
	return (1);
}
