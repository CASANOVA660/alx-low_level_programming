#include <stdio.h>
#include <stdlib.h>

/**
 * main -  print name
 *@argc: int.
 *@argv: char.
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int num1, num2, result;

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", result);
	}
	return (0);
}
