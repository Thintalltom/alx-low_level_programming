#include "main.h"

/**
 * _pow_recursion - print the recursion of the product of the power of x and y
 * @x: the number to be raised
 * @y: the power
 *
 * Return: the value of  x raised to y.
 */

int _pow_recursion(int x, int y)
{
int i = x;

if (y < 0)
return (-1);
if (y == 0)
return (1);
i *= _pow_recursion(x, y - 1);
return (i);
}
