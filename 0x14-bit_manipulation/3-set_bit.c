#include "main.h"
/**
 * set_bit - the objective is to sit the bit's index to 1
 * @n: pointer of the wannabe changed num
 * @index: the bit index is to be set to 1
 *
 * Return: 1 successful, -1 failed
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int x = 0;
	if (index > 63)
		return (-1);

	x = 1 << index;
	*n = ( *n | x);
	return (1);
}
