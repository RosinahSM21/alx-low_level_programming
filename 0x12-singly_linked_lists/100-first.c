#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
 * first - prints a phrase prior to the fundamental
 * operation is carried out
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
