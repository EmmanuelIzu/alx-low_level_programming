#include <stdio.h>
/**
 * startupfunction -  executes before the main function
 *
 *
 */
void startupfunction(void) __attribute__ ((constructor));

void startupfunction(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
