#include "main.h"

/**
 * _memcpy -  Copies memeory area
 *
 * @src: The source memory area to copy
 * @dest: The destination memory area
 * @n: Number of bytes to coppy
 *
 * Return: Pointers to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
char *begin = dest;

while (n--)
{
*dest = *src;
src++;
dest++;
}
return (begin);
}
