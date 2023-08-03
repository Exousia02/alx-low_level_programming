#include "main.h"
/**
* get_bit - It returns the quality of a bit at an index in a decimal number
* @x: indicates number to search
* @index: index of the bit
*
* Return: It returns the exact quality of the bit
*/
int get_bit(unsigned long int x, unsigned int index)
{
int bit_val;
if (index > 63)
return (-1);
bit_val = (x >> index) & 1;
return (bit_val);
}
