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
int i;
  
for (i = 0; i <= _strlen(src); i++)
  
{
    
dest[i] = src[i];
    
}

return (dest);
 
}
