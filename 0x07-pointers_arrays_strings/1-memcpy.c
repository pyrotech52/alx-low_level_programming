#include "main.h"

/**
  * _memcpy - main function prototype
  * @src: parameter
  * @dest:  parameter
  * @n: parameter
  * Return: dest
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
	dest[x] = src[x];
	}
	return (dest);
}
