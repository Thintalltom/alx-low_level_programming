#include "main.h"
/**
 * times_table - retrun multiplication table 9
 *
 * Return: Always (Success)
 */
void times_table(void)
{
int a;
int b;
int multi;
for (a = 0; a <= 9; a++)
{
for (b = 0; b <= 12; b++)
{
if (a >= 0 && b >= 0)
{
multi = a * b;
_putchar((multi / 10) + '0');
_putchar((multi % 10) + '0');
_putchar(',');
_putchar('\t');
}
}
}
