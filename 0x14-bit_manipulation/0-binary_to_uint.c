#include "main.h"

/**
* binary_to_uint - converting base2 num to integer
* @b: string that contains the base2 num
* Return: the result of input num after conversion
*/
unsigned int binary_to_uint(const char *b)
{
unsigned int value = 0;
int x = 0;
if (b == 0)
return (0);

for (x = 0; b[x]; x++)
{
if (b[x] > '1' || b[x] < '0')
return (0);
value *= 2;
value += (b[x] - '0');
}
return (value);
}
