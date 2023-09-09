#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Prints the lowercase alphabet in reverse order.
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x;

	for (x = 122; x >= 97; x--)
	{
		putchar(x);
	}

	putchar('\n');

	return (0);
}
