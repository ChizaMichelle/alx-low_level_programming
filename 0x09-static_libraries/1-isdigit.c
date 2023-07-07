#include "main.h"
/**
 * _isdigit - a function that checks for a digit
 * @c: character to be checked
 * Return: 1 if c is digit, return 0 otherwise
 */
int _isdigit(int c)

{
if (c >= '0' && c <= '9')
{
return (1);
}
return (0);
}
