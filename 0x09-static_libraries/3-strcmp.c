#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: string 1
 * @s2: strint 2
 *
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{

while (*s1 != '\0')
{
if (*s2 == '\0')
return (*s1);
if (*s2 > *s1)
return (*s1 - *s2);
if (*s1 > *s2)
return (*s1 - *s2);
s1++;
s2++;
}
if (*s2 != '\0')
return (*s2);
return (0);
}


