#include "main.h"
/**
* puts_half - half
* @str: parameter
*/
void puts_half(char *str)
{
int x;
int n;
int size = 0;
for (x = 0; str[x] != '\0'; x++)
size++;
n = (size - 1) / 2;
for (x = n + 1; str[x] != '\0'; x++)
_putchar(str[x]);
_putchar('\n');
}
