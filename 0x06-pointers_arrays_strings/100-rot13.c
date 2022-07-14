#include "main.h"

/**
 * rot13 - Encodes a string using ro13
 * Can only use on if statement, and only two loops
 * No use of switch or ternary operation
 *
 * @s: The string to encode
 *
 * Return: The encoded string
 */


char *rot13(char *s)
{
int i = 0;

while (s[i] != '\0')
{

while ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
{
if ((s[i] >= 'a' && s[i] <= 'm') || (s[i] >= 'A' && s[i] <= 'M'))

s[i] += 13;

else

s[i] -= 13;

i++;

}

i++;
}

return (s);

}

