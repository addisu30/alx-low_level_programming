#include "main.h"

/**
 * _strchr - eturns a pointer to the first occurrence of the
 * character c in the string s, or NULL if the character is not found
 * @s: memory area
 * @c: constant byte b
 *
 * Return: Nothing.
 */
char *_strchr(char *s, char c)
{
int l, i;

l = 0;
while (s[l] != '\0')
l++;
for (i = 0; i <= l; i++, s++)
{
if (*s == c)
return (s);
}
return (0);
}


