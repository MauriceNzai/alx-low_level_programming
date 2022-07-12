#include "main.h"

/**
 * _strlen - This function return the length of a given string
 *
 * @s: An input string
 *
 * Return: Nothing
 */

int _strlen(char *s)
{
int len = 0;

while (s[len] != '\0')
len++;

return (len);
}
