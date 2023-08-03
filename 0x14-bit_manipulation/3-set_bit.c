#include "main.h"
/**
* set_bit - It sets a given bit at a particular index to 1
* @q: This is the pointer to the number to be changed
* @index: index of the bit to set to 1
*
* Return: It returns 1 for success, and for failure it returns -1
*/
int set_bit(unsigned long int *q, unsigned int index)
{
if (index > 63)
return (-1);
*q = ((1UL << index) | *q);
return (1);
}
