#include <stdio.h>
/**
 * main - to print hexadecimal
 *
 * Return: Always (Success)
 */
int main(void)
{
int hex = 0;
char lo = 'a';

for (hex = 0; hex < 10; hex++)
{
putchar((hex % 10) + '0');
}
for (lo = 'a'; lo <= 'f';)
{
putchar(lo++);
}
putchar('\n');
return (0);
}
