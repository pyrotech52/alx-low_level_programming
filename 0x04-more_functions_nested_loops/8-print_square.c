#include "main.h"
/**
* print_square - square
* @size: size of the square
* Return: new line if size is 0
*/

void print_square(int size)
{
if (size <= 0)
{
_putchar('\n');
}
else
{int c, x;
for (c = 0; c < size; c++)
{
for (x = 0; x < size; x++)
{
_putchar('#');
}
_putchar('\n');
}
}
}

