#include "main.h"

/**
* flip_bits - this function's purpose is to return the
* number of bits to flipped to jump from one num to another
* @n: the given num
* @m: the number wannabe swtiched to
*
* Return: bit's number to be flipped
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int counter = 0, x;

	for (x = 63; x >= 0; x--)
	{
		if (((n ^ m) >> x) & 1)
			counter += 1;
	}

	return (counter);

}
