#include "main.h"

/**
 * cal_pwr - this function's objectiev is to calculate the power
 * @base: the number itself
 * @p: the power's value
 *
 * Return: the result's value
 */
unsigned long int cal_pwr(unsigned int bnmbr, unsigned int p)
{
	unsigned long int digits = 1;
	unsigned int x;

	for (x = 1; x <= p; x++)
		digits = digits * bnmbr;
	return (digits);
}

/**
 * print_binary - this func's objctve is to convert base 10 num to
 * a base2 num 
 * @n: number to print
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int m, k;
	char z = 0;

	m = cal_pwr(2, sizeof(unsigned long int) * 8 - 1);

	while (m != 0)
	{
		k = n & m;
		if (k == m)
		{
			z = 1;
			_putchar('1');
		}
		else if (z == 1 || m == 1)
		{
			_putchar('0');
		}
		m >>= 1;
	}
}
