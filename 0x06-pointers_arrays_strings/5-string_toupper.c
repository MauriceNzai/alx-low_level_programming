#include "main.h"

/**
 * string_toupper - Changes all lowercase letters of a string to uppercase
 *
 * @s: Pointer to the character
 *
 * Return: Pointer to converted string
 */

char *string_toupper(char *s)
{
char *start = s;

while (*s)
{

if (*s >= 'a' && *s <= 'z')
*s -= 32;

s++;
}

return (start);
}
