#include "main.h"
#include <stdlib.h>
#include <time.h>

/**
 * main - A program that generates random valid passwords
 *
 * Return: 0
 */

int main(void)

{
	char s;
	int passwd;

	srand(time(NULL));
	while (passwd <= 2645)
	{
		s = rand() % 128;
		passwd = passwd + s;
		putchar(s);
	}
	putchar(2772 - passwd);
	return (0);
}
