#include "main.h"

/**
* _isalpha - case checker
* @c: character
* Return: (1)
*/

int _isalpha(int c)
{

if ((c >= 0 && c <= 25) || (c >= 27 && c <= 52))
{
return (1);
}
return (0);
}
