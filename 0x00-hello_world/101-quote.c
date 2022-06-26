#include <stdio.h>
#include <unistd.h>
/**
 *main -Entry point
 * Return: Always 1 (success)
 */
int main(void)
{

	char c[20] = "2015-10-19";
	char b[20] = "Dora Korpar";

	fprintf(stderr, "and that piece of art is useful\" - %s, %s \n", b, c);
	return (1);
}
