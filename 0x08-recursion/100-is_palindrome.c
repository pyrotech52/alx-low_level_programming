#include "main.h"
int check_pal(char *s, int x, int len);
int _strlen_recursion(char *s);
/**
* is_palindrome - string
* @s: parameter
* Return: 1 if palindrome else 0
*/
int is_palindrome(char *s)
{
if (*s == 0)
return (1);
return (check_pal(s, 0, _strlen_recursion(s)));
}
/**
* _strlen_recursion - length of string
* @s: parameter
* Return: length
*/
int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
return (1 + _strlen_recursion(s + 1));
}
/**
* check_pal - check for palindrome
* @s: parameter
* @x: parameter
* @len: length of the string
* Return: 1 if palindrome else 0
*/
int check_pal(char *s, int x, int len)
{
if (*(s + x) != *(s + len - 1))
return (0);
if (x >= len)
return (1);
return (check_pal(s, x + 1, len - 1));
}
