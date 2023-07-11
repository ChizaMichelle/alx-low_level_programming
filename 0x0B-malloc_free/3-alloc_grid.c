#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
int **f;
int b, a;
if (width <= 0 || height <= 0)
return (NULL);
f = malloc(sizeof(int *) * height);
if (f == NULL)
return (NULL);
for (b = 0; b < height; b++)
{
f[b] = malloc(sizeof(int) * width);
if (f[b] == NULL)
{
for (; b >= 0; b--)
free(f[b]);
free(f);
return (NULL);
}
}
for (b = 0; b < height; b++)
{
for (a = 0; a < width; a++)
f[b][a] = 0;
}
return (f);
}
