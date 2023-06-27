#include "main.h"
/**
 * puts2 - a function that prints every other character of a string
 * starting with the first one
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
int leng = 0;
int a = 0;
char *b = str;
int c;

while (*b != '\0')
{
b++;
leng++;
}
c = leng - 1;
for (c = 0; c <= a; c++)
{
if (c % 2 == 0)
{
_putchar(str[c]);
}
}
_putchar('\n');
}
