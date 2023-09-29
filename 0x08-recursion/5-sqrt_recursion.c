#include "main.h"
/**
* actual_sqrt_recursion - sqr
* @n: parameter
* @x: parameter
*Return: negative
*/
int actual_sqrt_recursion(int n, int x);

/**
* _sqrt_recursion - square
* @n: parameter
* Return: negative
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (actual_sqrt_recursion(n, 0));
}

/**
* actual_sqrt_recursion - sqr
* @n: parameter
* @x: parameter
* Return: negative
*/
int actual_sqrt_recursion(int n, int x)
{
	if (x * x > n)
		return (-1);

	if (x * x == n)
		return (x);

	return (actual_sqrt_recursion(n, x + 1));
}
