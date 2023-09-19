#include "main.h"
/**
* print_rev - reverse
* @s: parameter
*/

void print_rev(char *s)
{
int x;
int size = 0;

for (x = 0; s[x] != '\0'; x++)
size++;

for (x = size - 1; x >= 0; x--)
_putchar (s[x]);
_putchar ('\n');
}
