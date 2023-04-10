#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - print the sum arguments.
 * @argc: argument count or size of arguments.
 * @argv: argument vector
 *
 * Return: 1 if are alphabetic arguments otherwise 0.
 */

int main(int argc, char *argv[])
{
	int add = 0, i;

	for (i = 1; i < argc; i++)
	{
		if (!isdigit(argv[i]))
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
