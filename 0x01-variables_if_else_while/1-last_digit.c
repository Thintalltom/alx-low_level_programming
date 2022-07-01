#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - The value should return a random number
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 5)
printf("Last digit of %d is %d and is greater than 5\n", n,  n % 10);
else if (n % 10 == 0)
printf("and is 0\n");
else if (n % 10 < 6 && n % 10 != 0)
printf("and is less than 6 and and not 0\n");
	return (0);
}
