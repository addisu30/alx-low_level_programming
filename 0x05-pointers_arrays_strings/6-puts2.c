#include "main.h"

/**
 * puts2 - reverses a string
 * @str: string
 *
 * Return: On success 1.
 */
void puts2(char *str)
{
int i, j;

i = 0;
j = 0;
while (str[i] != '\0')
{
i++;
}
while (j < i)
{
if (j % 2 == 0)
{
_putchar(str[j]);
}
j++;
}
_putchar('\n');
}
