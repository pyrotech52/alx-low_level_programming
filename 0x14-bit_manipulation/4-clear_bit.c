#include "main.h"
/**
 * clear_bit - sets the value od bit to 0
 * @n: pointer
 * @index: index
 * Return: 1 else -1 if failed
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > sizeof(n) * 8)
return (-1);
*n &= ~(1 << index);
return (1);
}
