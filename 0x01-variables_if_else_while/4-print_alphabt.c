#include<stdio.h>
/**
 * main - print alphabet in lower case followed by anew line and q and e
 *
 * Return: Always (Success)
 *
 */
int main(void)
{

char ch = 'a';

while (ch <= 'z')
{
if (ch != 'e' && ch != 'q')
{
putchar(ch);
}
ch++;
}
putchar('\n');
return (0);

}
