#include "3-calc.h"

/**
 * main - prforms simple operations
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: int
 */

int main(int argc, char *argv[])
{
	int x, y, z;

	if (argc != 4)
	{
		printf("Error\n");
			return (98);
	}
	x = atoi(argv[1]);
	y = atoi(argv[3]);
	if (!get_op_func(argv[2]) || argv[2][1] != '\0')
	{
		printf("Error\n");
			return (99);
	}
	if (y == 0 && (*argv[2] == '/' || *argv[2] == '%'))
	{
		printf("Error\n");
		return (100);
	}
	z = get_op_func(argv[2])(x, y);
	printf("%d\n", z);
	return (0);
}
