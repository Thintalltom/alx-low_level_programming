#include <stdio.h>
#include <unistd.h>
/**
 *main -Entry point
 * Return: Always 1 (success)
 */
int main(void)
{
	char a[20] = "and that piece of art is useful";

	fprintf(stderr, "%s\" - Dora Korpar, 2015-10-19\n", a);
	return (1);
}
