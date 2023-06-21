#include "main.h"

/**
 * print_alphabet_x10 - print alphabets in lower case
 *
 * Return: void
 */
void print_alphabet_x10(void)

{
	char s;
	int i = 0;

	while (i <= 9)

	{
		for (s = 'a'; s <= 'z'; s++)
		{
			_putchar(s);
		}
			_putchar('\n');
			i++;
	}
}
