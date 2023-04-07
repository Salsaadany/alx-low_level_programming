#include "main.h"
#include<math.h>
/**
* print_binary - converts a decimal number to a base2 num
* @n: the num to be printed in base2 numerical system
*/
void print_binary(unsigned long int n)
{
int cnt = 0, x;
unsigned long int crrnt;

for (x = 63; x >= 0; x--)
{

/*crrnt = n >> x;*/

crrnt = n / pow (n,x);
if (crrnt & 1)
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
