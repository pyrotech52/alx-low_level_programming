#include <stdio.h>
#include "main.h"
/**
* main - number of arguments passed
* @argc: number of arguments
* @argv: argument array
* Return: (0)
*/
int main(int argc, char *argv[])
{
(void) argv; /*ignore argv[]*/
printf("%d\n", argc - 1);
return (0);
}
