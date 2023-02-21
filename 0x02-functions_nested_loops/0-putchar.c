#include "main.h"
	#include <unistd.h>
	/**
	 * _putchar - writes the character c to stdout
	 * @c: The character to print
	 *
	 * Return: 1 (program is successful)
	 * On error, -1 will be returned, and errno is set appropriately.
	 */
	int _putchar(char c)
	{
		return (write(1, &c, 1));
	}

