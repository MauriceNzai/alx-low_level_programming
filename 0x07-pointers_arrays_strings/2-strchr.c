#include "main.h"

/**
 * _strchr - Locates a character in a string
 *
 * @s: String to search in
 * @c: Character to locate
 *
 * Return: Pointer to c
 */

char *_strchr(char *s, char c)
{

while (*s != '\0')
{
if (*s == c)
return (s);
s++;
}

if (*s == c)
return (s);

else
return (NULL);
}
