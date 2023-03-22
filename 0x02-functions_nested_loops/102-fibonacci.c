#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */

int main(void) 
{
    	int a = 1, b = 2, c, i;

    	printf("%d, %d, ", a, b);

   	 for (i = 2; i < 50; i++)
	 {
        	c = a + b;
        	printf("%d, ", c);
        	a = b;
        	b = c;
    	}

    	printf("\n");
    	return (0);
}
