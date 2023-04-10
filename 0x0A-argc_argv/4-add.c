#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the sum arguments.
 * @argc: argument count or size of arguments.
 * @argv: argument vector
 *
 * Return: 1 if are alphabetic arguments otherwise 0.
 */

int main(int argc, char *argv[])
{
	int add, i;

	for (i = 0; i < argc; i++)
	{
		if (argv[i] < 48 || argv[i] > 57)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			add += atoi(argv[i]);
			printf("%d\n", add);
		}
	}

	if (argc < 2)
	{
		printf("0\n");
	}
	return (0);
}
