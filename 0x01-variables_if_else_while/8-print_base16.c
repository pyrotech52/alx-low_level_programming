#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Prints all numbers of base 16.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;

	for (x = 48; x <= 57; x++)
	{
		putchar(x);
	}

	for (x = 97; x <= 102; x++)
	{
		putchar(x);
	}

	putchar('\n');

	return (0);
}
