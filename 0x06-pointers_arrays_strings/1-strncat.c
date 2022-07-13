#include "main.h"

/**
 * _strncat - This function concatenates two strings
 * It uses at most n bytes from src
 * src does not need to be null-terminated if it contains n or more bytes
 *
 * @dest: Destination string
 * @src: Source string
 * @n: Number of bytes of src string
 *
 * Return: pointer to new concatenated string
 */


char *_strncat(char *dest, char *src, int n)
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

while (*dest)
dest++;

if (n > srclen)
n = srclen;

src = start;

for (; i < n; i++)
*dest++ = *src++;

*dest = '\0';

return (temp);
}
