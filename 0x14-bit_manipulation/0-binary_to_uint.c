#include "main.h"

/**
* binary_to_uint - converting base2 num to integer
* @b: the string that contains the base2 num
* Return: the result of the num after conversion
*/
unsigned int binary_to_uint(const char *b)
{
unsigned int dcmvalue = 0;
int x;
if (!b)
return (0);

for (x = 0; b[x]; x++)
{
if (b[x] > '1' || b[x] < '0')
return (0);
dcmvalue = 2 * dcmvalue + (b[x] - '0');
}
return (dcmvalue);
}
