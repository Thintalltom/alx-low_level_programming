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
_putchar('0');
for (b = 0; b <= 12; b++)
{
_putchar(',');
_putchar(' ');
multi = a * b;
if (multi <= 9)
{
_putchar(' ');
}
else
{
_putchar((multi / 10) + '0');
_putchar((multi % 10) + '0');
}
}
_putchar('\n');
}
}
