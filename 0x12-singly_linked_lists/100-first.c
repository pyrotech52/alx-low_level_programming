#include <stdio.h>

void before(void) __attribute__ ((constructor));

/**
 * before - Prints a message before the main function is executed.
 */
void before(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
