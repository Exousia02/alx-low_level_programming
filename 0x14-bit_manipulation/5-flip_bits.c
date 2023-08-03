#include "main.h"
/**
* flip_bits - counts number of bits to convert
* In order to derive from one number to the other
* @j: first number
* @k: second number
*
* Return: It returns the number of bits to convert
*/
unsigned int flip_bits(unsigned long int j, unsigned long int k)
{
int i, count = 0;
unsigned long int current;
unsigned long int exclusive = j ^ k;
for (i = 63; i >= 0; i--)
{
current = exclusive >> i;
if (current & 1)
count++;
}
return (count);
}
