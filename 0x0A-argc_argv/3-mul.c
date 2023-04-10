#include <stdio.h>

/**
 * main -  print name
 *@argc: int.
 *@argv: char.
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int num1, num2, result;

	num1 = argv[1];
	num2 = argv[2];

	if (argc =! 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		result = num1 * num2;
		printf("%d\n", result);
	}
	return (0);
}
