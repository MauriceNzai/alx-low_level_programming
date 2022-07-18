# include "main.h"

/**
 * _memset - Fills memory with constant bytes
 *
 * @s: locatio to fill
 * @b: chaaracterr to fill location with
 * @n: number of bytes to fill memory with
 *
 * Return: Pointer to the location to be filled
 */

char *_memset(char *s, char b, unsigned int n)
{
char *begin = s;

while (n--)
{
*s = b;
s++;
}
return (begin);
}
