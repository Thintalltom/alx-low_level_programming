#include <stdio.h>
/**
 * main -Entry point
 *
 * Return: Always O (Success)
 */

int main(void)
{
printf("Size of a char: %ld byte(s)\n", sizeof(char));
printf("Size of an int: %ld byte(s)\n", sizeof(int));
printf("Size of a long int: %ld byte(s)\n", sizeof(int));
printf("Size of a long long int: %li byte(s)\n", sizeof(long long int));
printf("Size of a float: %ld byte(s)", sizeof(float));
return (0);
}
