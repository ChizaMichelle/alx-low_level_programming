#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - A program that prints all single digit numbers of base 10
 * Return: Always 0 (Success)
 */

int main(void)

{
int a;
for (a = '0'; a <= '9'; a++)
putchar(a);
putchar('\n');

return (0);
}
