#include "main.h"

/**
* reverse_array - reverse
* @a: parameter
* @n: parameter
* Return: 0
*/

void reverse_array(int *a, int n)
{
int x, y;
for (x = 0; x < n--; x++)
{
y = a[x];
a[x] = a[n];
a[n] = y;
}
}
