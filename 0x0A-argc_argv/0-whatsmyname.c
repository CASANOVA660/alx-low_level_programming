#include <stdio.h>

/**
 * main - print the name of the executable.
 * @argc: argument count or size of arguments.
 * @argv: argument vector
 *
 * Return: always 0.
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s", argv[0]);
	return (0);
}
