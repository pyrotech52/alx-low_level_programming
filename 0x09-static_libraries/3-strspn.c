#include "main.h"

/**
  * _strspn - main
  * @s: parameter
  * @accept: parameter
  * Return:  (0)
  */
unsigned int _strspn(char *s, char *accept)
{

	unsigned int _strspn(char *s, char *accept);
	unsigned int y = 0;
	int x;

	while (*s)
	{
	for (x = 0; accept[x]; x++)
	{
	if (*s == accept[x])
	{
	y++;
	break;
	}
	else if (accept[x + 1] == '\0')
	return (y);
	}
	s++;
	}
	return (y);
}
