#include "main.h"

/**
 * _strcpy - This functions copies the string pointed to by pointer src
 * including the terminating null byte (\0), to buffer pointed to by dest
 *
 * @dest: Buffer to yank copied text
 * @src: String pointer
 *
 * Return: *dest
 */

char *_strcpy(char *dest, char *src)

{
char *aux = dest;

while (*src)

*dest++ = *src++;

return (aux);

}
