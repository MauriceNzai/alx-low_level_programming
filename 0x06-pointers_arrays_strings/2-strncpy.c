#include "main.h"

/**
 * _strncpy - Function copies a string, works exactly like strncpy
 *
 * @dest: The destination string
 * @src: The source string
 * @n: An integer value
 *
 * Return: The resulting string
 */

char *_strncpy(char *dest, char *src, int n)
{
int srclen = 0;
int i = 0;
char *temp = dest;
char *start = src;

while (*src)
{
srclen++;
src++;
}

srclen++;

if (n > srclen)
n = srclen;

src = start;

for (; i < n; i++)
*dest++ = *src++;

return (temp);
}
