#include "main.h"
#include <stdlib.h>
/**
* create_array - array of chars
* @c: parameter
* @size: size of array
* Return: pointer to the array or null if it fails
*/
char *create_array(unsigned int size, char c)
{
char *str;
unsigned int x;
str = malloc(sizeof(char) * size);
if (size == 0 || str == NULL)
return (NULL);
for (x = 0; x < size; x++)
str[x] = c;
return (str);
}
