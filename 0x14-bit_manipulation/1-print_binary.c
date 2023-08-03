#include "main.h"
/**
* print_binary - it prints the binary equal to a decimal number
* @j: It indicates the number to print in binary
*/
void print_binary(unsigned long int j)
{
int i, count = 0;
unsigned long int current;
for (i = 63; i >= 0; i--)
{
current = n >> i;
if (current & 1)
{
_putchar('1');
count++;
}
else if (count)
_putchar('0');
}
if (!count)
_putchar('0');
}
