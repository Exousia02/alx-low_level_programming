#include "main.h"
/**
* clear_bit - It sets the quality of a particular bit to 0
* @w: It is the exact pointer to the number to be converted
* @index: index of the bit to clear
*
* Return: It simply returns 1 for success, and it returns -1 for failure
*/
int clear_bit(unsigned long int *w, unsigned int index)
{
if (index > 63)
return (-1);
*w = (~(1UL << index) & *w);
return (1);
}
