#include "main.h"
/**
 *print_last_digit - return 1 and 0
 *@n: parameter
 *
 *Return: Always (Succes)
 */
int print_last_digit(int n)
{
if (n < 0)
n = -n;
return (n % 10);
}
