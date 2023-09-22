#include "main.h"
/**
* _strncat -function
* @dest: parameter
* @src: parameter
* @n: parameter
* Return: dest
*/

char *_strncat(char *dest, char *src, int n)
{
int x, y;
x = 0;
y = 0;

while (dest[x] != '\0')
{
x++;
}
while (y < n && src[y] != '\0')
{
dest[x] = src[y];
x++;
y++;
}
dest[x] = '\0';
return (dest);
}
