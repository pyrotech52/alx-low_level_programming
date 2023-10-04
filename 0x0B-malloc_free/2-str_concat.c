#include "main.h"
#include <stdlib.h>
/**
* str_concat - combines
* @s1: parameter
* @s2: parameter
* Return: empty or NULL of failure
*/
char *str_concat(char *s1, char *s2)
{
char *c;
int x, xy;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
x = xy = 0;
while (s1[x] != '\0')
x++;
while (s2[xy] != '\0')
xy++;
c = malloc(sizeof(char) * (x + xy + 1));
if (c == NULL)
return (NULL);
x = xy = 0;
while (s1[x] != '\0')
{
c[x] = s1[x];
x++;
}
while (s2[xy] != '\0')
{
c[x] = s2[xy];
x++, xy++;
}
c[x] = '\0';
return (c);
}
