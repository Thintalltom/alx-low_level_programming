#include <stdio.h>
/**
 * main - to print hexadecimal
 *
 * Return: Always (Success)
 */
int main(void)
{
int a;
char b;

for (a = 0; a < 10; a++)
{
putchar(a);
}
for (b = 'a'; b <= 'f'; b++)
{
putchar(b);
}
putchar('\n');
return (0);
}
