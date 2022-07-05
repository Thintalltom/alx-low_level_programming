#include "main.h"
/**
 *print_last_digit - return 1 and 0
 *@n: parameter
 *
 *Return: Always (Succes)
 */
int print_last_digit(int n)
{
if (n >= 0)
n *= -1;
_putchar((n / 10) + '0');
return ((n % 10) + '0');
