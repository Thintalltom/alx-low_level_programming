#include "main.h"
/**
 * _isalpha - return 1
 * @c: a character argument
 * Return: return 1 and 0
 */
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
