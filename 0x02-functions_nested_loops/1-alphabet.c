#include "main.h"
/**
 *print_alphabet - print lowercase alphabet
 *
 *Return - Always (Success)
 */

void print_alphabet(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar(letter);
}
_putchar('\n');
}
