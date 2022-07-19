#include "main.h"
/**
 * factorial - retruns the factorial of the given number
 * @n: the number to be return
 *
 *Return: Always success
 *
 *
 */
int factorial(int n)
{
int i = n;

if (n < 0)
return (-1);
else if (n >= 0 && n <= 1)
return (1);
i *= factorial(n - 1);
return (i);
}
