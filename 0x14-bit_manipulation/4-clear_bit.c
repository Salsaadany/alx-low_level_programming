#include "main.h"

/**
* clear_bit - the objective is to set the bit's value at the given index to 0
* @n: unsigned long int type pointer
* @index: the bit's index
*
* Return: 1 if successful, -1 if not
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index < 63)
	{
		*n &= ~(1 << index);
		return (1);
	}
	else
		return (-1);
}
