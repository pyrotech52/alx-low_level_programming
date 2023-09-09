#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Prints all single digit numbers of 10 starting from 0.
 * Return: Always 0
 */

int main(void)
{
	char x;

	for (x = '0'; x <= '9'; x++)
	{
		putchar(x);
	}

	putchar('\n');

	return (0);
}
