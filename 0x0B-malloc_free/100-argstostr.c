#include "main.h"
#include <stdlib.h>
/**
* argstostr - combines all arguments
* @ac: parameter
* @av: parameter
* Return: 0
*/
char *argstostr(int ac, char **av)
{
int x, y, a = 0, b = 0;
char *str;
if (ac == 0 || av == NULL)
return (NULL);
for (x = 0; x < ac; x++)
{
for (y = 0; av[x][y]; y++)
b++;
}
b += ac;
str = malloc(sizeof(char) * b + 1);
if (str == NULL)
return (NULL);
for (x = 0; x < ac; x++)
{
for (y = 0; av[x][y]; y++)
{
str[a] = av[x][y];
a++;
}
if (str[a] == '\0')
{
str[a++] = '\n';
}
}
return (str);
}
