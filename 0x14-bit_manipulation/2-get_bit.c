#include "main.h"

/**
* get_bit - the objective is returning bit value in a base10 num
* @n: search of a number
* @index: the bit index
*
* Return: the value of the bit at the given index
*/
int get_bit(unsigned long int n, unsigned int index)
{
	int bvalue;

	if (index < 63)
	{
		bvalue = n >> index;
		return (bvalue & 1);
	}
	else
		return (-1);
}
