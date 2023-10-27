#include "main.h"
/**
 * get_bit - value of a bit
 * @n: parameter
 * @index: index
 * Return: value of bit else -1
*/
int get_bit(unsigned long int n, unsigned int index)
{
if (index >= sizeof(unsigned long int) * 8)
{
return (-1);
}

return ((n >> index) & 1);
}
