#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies one string to another
 * @dest: Array
 * @src: Size of Array
 *
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
int i, j;

i = 0;
while (src[i] != '\0')
{
i++;
}
for (j = 0; j <= i; j++)
{
dest[j] = *(src + j);
}
return (dest);
}

