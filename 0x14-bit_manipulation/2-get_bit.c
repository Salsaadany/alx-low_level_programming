#include "main.h"

/**
* get_bit - the objective is returning bit value in a base10 num
* @n: search of a number
* @index: the bit index
* Return: the bit value 
*/
int get_bit(unsigned long int n, unsigned int index)
{
int bvalue = 0;
if (index > 63)
return (-1);
bvalue = (n >> index) & 1;
return (bvalue);
}
