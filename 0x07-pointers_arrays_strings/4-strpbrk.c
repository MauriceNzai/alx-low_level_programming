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
int i;
int j;
int t;

i = 0;
while (s[i] != '\0')
{

t = 0;
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
t = 1;
}

j = 0;
if (t == 1)
return (s + i);
i++;
}

return (0);
}
