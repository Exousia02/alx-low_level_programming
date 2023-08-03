#include "main.h"
/**
* binary_to_uint - changes binary number to unsigned integer
* @b: string with the binary number
*
* Return: It returns changed number
*/
unsigned int binary_to_uint(const char *j)
{
int k;
unsigned int dec_val = 0;
if (!j)
return (0);
for (k = 0; j[k]; k++)
{
if (j[k] < '0' || j[k] > '1')
return (0);
dec_val = 2 * dec_val + (j[k] - '0');
}
return (dec_val);
}
