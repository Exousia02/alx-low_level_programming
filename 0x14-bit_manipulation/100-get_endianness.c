#include "main.h"
/**
* get_endianness - verifies if a machine is small or large endian
* Return: It simply returns 0 for large, and then 1 for small
*/
int get_endianness(void)
{
unsigned int y = 1;
char *c = (char *) &y;
return (*c);
}
