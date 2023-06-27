#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

/**
 * main - program that generates random valid
 * passwords for the program 101-crackme
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int pass[99];
int a, sum, b;

sum = 0;

srand(time(NULL));

for (a = 0; a < 99; a++)
{
pass[a] = rand() % 60;
sum += (pass[a] + '0');
putchar(pass[a] + '0');
if ((1550 - sum) - '0' < 60)
{
b = 1550 - sum - '0';
sum += b;
putchar(b + '0');
break;
}
}

return (0);
}
