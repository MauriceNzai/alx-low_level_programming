#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes
 *
 * Description: Locates first occarance in string s of any o f the bytes
 *
 * @s: The string to search in
 * @accept: The set of bytes to search
 *
 * Return: Pointer to matching bytes in accept of NULL if no matching set
 */

char *_strpbrk(char *s, char *accept)
{
char *begin = accept;

while (*s)
{

while (*accept)
if (*accept == *s)
return (s);

accept++;
}

accept = begin;
s++;
}

return (NULL);
}
