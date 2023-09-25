#include "main.h"
#include <stdio.h>

/**
  * print_diagsums - main
  * @size: parameter
  * @a: parameter
  * Return: (0)
  */

void print_diagsums(int *a, int size)
{
	int x;
	int y;
	int z;

	x = 0;
	y = 0;

	for (z = 0; z < size; z++)
	{
	x = x + a[z * size + z];
	}
	for (z = size - 1; z >= 0; z--)
	{
	y += a[z * size + (size - z - 1)];
	}
	printf("%d, %d\n", x, y);
}
