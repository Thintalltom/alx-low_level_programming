#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character c to the stdout
 * @c: the character to print
 *
 * Return: On success 1
 * on error, -1 is required, and errno is set appropraitely.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
