#include "main.h"
/**
 * print_last_digit - a function that prints the last digit of a number
 * @c: the int to extract the last digit from
 * Return: value of last digit
 */
int print_last_digit(int c)

{
int f;

if (c < 0)
c = -c;
f = c % 10;
if (f < 0)
f = -f;

_putchar(f + '0');
return (f);
}
