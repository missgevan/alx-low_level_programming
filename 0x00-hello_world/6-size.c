#include <stdio.h>
/**
 * main -Entry point
 *
 * Return: Always 0 (Succcess)
 */
int main(void)
{
char u;
int v;
long int w;
long long int x;
float y;
printf("Size of a char: %d byte(s)\n", sizeof(u));
printf("Size of an int: %d byte(s)\n", sizeof(v));
printf("Size of a long int: %d bytes(s)\n", sizeof(w));
printf("Size of a long long int: %d byte(s)\n", sizeof(x));
printf("Size of a float: %d bytes(s)\n", sizeof(y));
return (0);
}
