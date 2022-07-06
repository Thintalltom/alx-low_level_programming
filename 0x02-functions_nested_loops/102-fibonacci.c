#include <stdio.h>

/**
 * main - fibonacci 50
 *
 *
 * Return:  (Success)
 */

int main(void)
{
	unsigned long int i;
	unsigned long int y = 1;
	unsigned long int x = 2;

	printf("%lu", y);

	for (i = 1; i < 50; i++)
	{
		printf(", %lu", x);
		x += y;
		y = x - y;
	}
	printf("\n");
	return (0);
}
