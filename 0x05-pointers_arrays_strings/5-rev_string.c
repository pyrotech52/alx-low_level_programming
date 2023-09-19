#include "main.h"
/**
* rev_string - reverse
* @s: parameter
*/
void rev_string(char *s)

{
int x;
int size = 0;

for (x = 0; s[x] != '\0'; x++)
size++;
for (x = 0; x < size / 2; x++)
{
char y;
y = s[x];
s[x] = s[size - 1 - x];
s[size - 1 - x] = y;
}
}
