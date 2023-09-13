#include "main.h"

/**
* print_last_digit - last digits
* @r: last
* Return: last digit
*/

int print_last_digit(int r)
{

int last_digit;

last_digit = r % 10;
if (last_digit < 0)
{
last_digit = last_digit * -1;
}
_putchar(last_digit + '0')
}
_putchar(last_digit)
}
