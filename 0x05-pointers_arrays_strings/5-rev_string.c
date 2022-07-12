#include "main.h"

/**
 * rev_string - This function reverses a string
 *
 * @s: An input string to reverse
 *
 * Return: Nothing
 */

void rev_string(char *s)
{
int len;
int x;
char rev;

len = 0;
x = 0;

while (s[len] != '\0')
len++;

while (x < len--)
{
rev = s[x];
s[x++] = s[len];
s[len] = rev;
}
}
