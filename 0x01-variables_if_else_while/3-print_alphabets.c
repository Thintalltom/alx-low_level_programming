#include<stdio.h>
/**
 * main - return the succesfful result
 *
 *
 * Return: Always (Success)
 */

int main(void)
{
char ab;

for (ab = 'a'; ab <= 'z'; ab++)
{
putchar(ab);
}
for (ab = 'A'; ab = 'Z'; ab++)
{
putchar(ab);
}
putchar('\n');
return (0);
}
