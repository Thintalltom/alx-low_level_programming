#include "main.h"
/**
 *print_last_digit - return 1 and 0
 *@n: parameter
 *
 *Return: Always (Succes)
 */
int print_last_digit(int n)
{
int x;

if (n < 0)
n = -n;
x = n % 10;
_putchar(x + '0');
return (x);
}
