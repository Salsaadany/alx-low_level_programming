#include "main.h"
/**
 * set_bit - the objective is to sit the bit's index to 1
 * @n: pointer of the wannabe changed num
 * @index: the bit index is to be set to 1
 * Return: 1 if successful, -1 if not
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index < 63)
	{
		*n |= (1 << index);
		return (1);
	}
	else
		return (-1);
}
