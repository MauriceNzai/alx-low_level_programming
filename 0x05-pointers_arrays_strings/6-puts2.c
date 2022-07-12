#include "main.h"

/**
 * puts2 - This function prints every other character of a string
 * starting with the first character, followed by a new line
 *
 * @str: An input string
 *
 * Return: Nothing
 */

void puts2(char *str)
{
int len;
int x;

len = 0;

while (str[len] != '\0')
len++;
len -= 1;

for (x = 0; x <= len; x += 2)
_putchar(str[x]);

_putchar('\n');
}
