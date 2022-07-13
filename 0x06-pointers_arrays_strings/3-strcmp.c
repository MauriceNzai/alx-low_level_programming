#include "main.h"

/**
 * _strcmp - Compares two strings, works exactly like strcmp
 *
 * @s1: The first string
 * @s2: The second string
 *
 *Return: The diff string
 */

int _strcmp(char *s1, char *s2)
{
while (*s1 && *s2)
{
if (*s1 != *s2)
return (*s1 - *s2);
s1++;
s2++;
}

return (*s1 - *s2);
}
