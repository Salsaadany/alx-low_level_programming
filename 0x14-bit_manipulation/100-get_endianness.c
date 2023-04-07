#include "main.h"

/**
* get_endianness - the objective is to
* check the endianness
*
* Return: 0 for big endian, 1 if otherwise
*/

int get_endianness(void)
{

	unsigned int f = 1;

	char *x;

	x = (char *) &f;

	return (*x);
}
