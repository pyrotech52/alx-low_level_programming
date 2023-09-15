#include "main.h"

/**
* print_triangle - triangle
* @size: size of the triangle
* Return: new line if size is 0
*/

void print_triangle(int size)
{
if (size <= 0)
{
_putchar('\n');
}
else
{
int x, y;
for (x = 1; x <= size; x++)
{
for (y = x; y < size; y++)
{
_putchar(' ');
}
for (x = 1; y <= x; y++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
