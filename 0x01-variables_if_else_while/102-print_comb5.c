#include <stdio.h>
/**
* main - view
* Return: (0)
*/

int main(void)
{
int a, b;

for (a = 0; a <= 99; a++)
{
for (b = 0; b <= 99; b++)
{
putchar((a / 10) + '0');
putchar((a % 10) + '0');
putchar(32);
putchar((b / 10) + '0');
putchar((a % 10) + '0');
if (a != 99 || b != 99)
{
putchar(44);
putchar(32);
}
}
}
putchar(10);
return (0);
}
