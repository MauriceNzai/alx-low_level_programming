#include "main.h"

/**
 * puts_half - This functions prints half of string, followed by a new line
 * Itt prints the second half of the srting
 * If odd number of characters in given string
 * it prints last n characters, where n = (length_of_the_string - 1) / 2
 *
 * @str: An input string
 *
 * Return: Nothing
 */

void puts_half(char *str)
{
int len;
int x;
int n;

len = 0;

while (str[len] != '\0')
len++;

if (len % 2 == 0)
n = len / 2;

else
n = (len + 1) / 2;

for (x = n; x < len; x++)
_putchar(str[x]);

_putchar('\n');
}


