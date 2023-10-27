#include "main.h"
/**
 * set_bit - sets the bit
 * @n: pointer
 * @index: index
 * Return: 1 if success else -1
*/

int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int i;

if (index > (sizeof(unsigned long int) * 8 - 1))
return (-1);
i = 1 << index;
*n = *n | i;
return (1);
}
