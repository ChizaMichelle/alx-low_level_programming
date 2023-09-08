#include "main.h"
#include <stdlib.h>
/**
 * read_textfile- reads a text file and prints it to the POSIX standard output
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return:0 when function fails or filename is NULL
 * b - actual number of bytes read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
char *i;
ssize_t a;
ssize_t b;
ssize_t c;
a = open(filename, O_RDONLY);
if (a == -1)
return (0);
i = malloc(sizeof(char) * letters);
c = read(a, i, letters);
b = write(STDOUT_FILENO, i, c);
free(i);
close(a);
return (b);
}
