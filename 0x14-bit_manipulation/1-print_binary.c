#include "main.h"
/**
* print_binary - converts a decimal number to a base2 num
* @n: the num to be printed in base2 numerical system
*/
void print_binary(unsigned long int n)
{
	int cnt = 0, x;
	unsigned long int bin, temp;

	if (n == 0)
		return 0; 

	for (x = 63; x >= 0; x--)
	{
		temp = n >> x;

		if (temp & 1)
		{
			_putchar('1');
			cnt++;
		}
		else if (cnt)
			_putchar('0');
	}
	if (!cnt)
		_putchar('0');
}
