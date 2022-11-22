#include <stdio.h>

/**
 * be_main - before main function
 */
void __attribute__ ((constructor)) be_main()
{
printf(
"You're beat! and yet, you must allow,\nI bore my house upon my back!\n"
);
}
