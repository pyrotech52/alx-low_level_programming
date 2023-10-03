#include <stdio.h>
#include "main.h"
/**
* main - arguments received
* @argc: number of argument
* @argv: argument array
* Return: (0)
*/
int main(int argc, char *argv[])
{
int x;
for (x = 0; x < argc; x++)
{
printf("%s\n", argv[x]);
}
return (0);
}
