#include "main.h"
/**
 *print_numbers- Return nine numbers
 *
 * Return: Always (Success)
 */

void print_numbers(void)
{
int x;
for (x = 0; x < 10; x++)
{
_putchar((x % 10) + '0');
}
_putchar('\n');
}
