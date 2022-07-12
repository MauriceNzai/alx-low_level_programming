#include "main.h"

/**
 * _puts - This function printd a string, followed by a new line, to the stdout
 *
 * @str: An input string
 *
 * Return: Nothing
 */

void _puts(char *str)
{
int x = 0;

while (str[x] != '\0')
{
_putchar(str[x]);
x++;
}

_putchar('\n');
}
