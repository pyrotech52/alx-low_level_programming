#include "main.h"
/**
* _strlen - string
* @s: parameter
* Return: length
*/

int _strlen(char *s)
{
int x;
int size = 0;

for (x = 0; s[x] != '\0'; x++)
size++;
return (size);
}
