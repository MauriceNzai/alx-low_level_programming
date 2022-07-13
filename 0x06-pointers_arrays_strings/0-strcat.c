#include "main.h"

/**
 * _strcat - Thsis function concatenates two strings
 * It appends the src string to the dest string,
 * Overwriting the terminating null byte (\0)at the end of dest,
 * and adds a terminating null byte
 *
 * @dest: The destination string
 * @src: The source strting
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
char *temp = dest;

while (*dest)
dest++;

while (*src)
*dest++ = *src++;

*dest = '\0';

return (temp);
}
