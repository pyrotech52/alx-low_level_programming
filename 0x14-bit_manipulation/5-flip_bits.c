#include "main.h"
/**
 * flip_bits - flipped bits
 * @n: parameter
 * @m: parameter
 * Return: number of bits
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int x = n ^ m;
unsigned int bit_count = 0;
while (x)
{
bit_count += x & 1;
x >>= 1;
}
return (bit_count);
}
