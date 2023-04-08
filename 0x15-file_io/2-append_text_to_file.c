#include "main.h"

/**
 * append_text_to_file - func' prpse is appndin txt to txtf's tail
 * @filename: txtf name, SAA
 * @text_content: the txtf's content
 *
 * Return: 1 if exists, -1 if otherwise
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int x, count, r_w1;

	if (!filename)
		return (-1);

	x = open(filename, O_WRONLY | O_APPEND);

	if (x == -1)
		return (-1);

	if (text_content)
	{
		for (count = 0; text_content[count]; count++)
			;

		r_w1 = write(x, text_content, count);

		if (r_w1 == -1)
			return (-1);
	}

	close(x);

	return (1);
}
