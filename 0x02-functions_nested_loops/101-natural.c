#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
	int i, sm;

	for(i = 3; i < 1025; i++)
	{
		if((i % 5 == 0) || (i % 3 == 0))
			sm = sm + i;
	}
	printf("%d",sum);
	printf("\n");
	return (0);
}
