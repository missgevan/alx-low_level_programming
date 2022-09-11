#include <stdio.h>
/**
 * main -Entry point
 *
 * Retun: Always 0 (Succcess)
 */
int main(void)
{
char u;
int v;
long int w;
long long int x;
float y;
printf("Size of a char: %i byte(s)\n", sizeof(u));
printf("Size of an int: %i byte(s)\n", sizeof(v));
printf("Size of a long int: %i bytes(s)\n", sizeof(w));
printf("Size of a long long int: %i byte(s)\n", sizeof(x));printf("Size of a float: %i bytes(s)\n", sizeof(y));
return (0);
}
