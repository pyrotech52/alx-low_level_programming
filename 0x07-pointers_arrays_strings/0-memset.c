#include "main.h"
/**
* _memset - memory
* @b: parameter
* @s: parameter
* @n: parameter
* Return: s
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
		n--;
	}
	return (s);
}
