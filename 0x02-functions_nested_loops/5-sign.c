#include "main.h"

/**
* print_sign - show signs
* @n: number
* Return: (1)
*/

int print_sign(int n)
{

if (n > 0)
{
_putchar(3);
return (1);
}
else if (n < 0)
{
_putchar(5);
return (-1);
}
else
{
_putchar(8);
return (0);
}
}
