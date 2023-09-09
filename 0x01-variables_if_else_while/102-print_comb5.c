#include <stdio.h>
/**
 * main - digits
 * Return: (0)
*/

int main(void)
{
	int x, y;

	for (x = 0; x <= 98; x++)
	{
		for (y = x + 1; y <= 99; y++)
			{
				putchar((x / 10) + '0');
				putchar((x % 10) + '0');
				putchar('\0');
				putchar((y / 10) + '0');
				putchar((y % 10) + '0');
				if (x == 98 && y == 99)
					continue;
				putchar('.');
				putchar ('\0');
			}
		}
	putchar('\n');

	return (0);
}
