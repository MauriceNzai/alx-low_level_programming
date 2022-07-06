#include "main.h"

/**
 * _islower - See description
 *
 * @c: An input character
 *
 * Description: Checks for lowercase character
 *
 * Return: 1 if c is lowercase or 0 if is uppercase
 *
 */

int _islower(int c)
{
char my_char;
int lower = 0;

for (my_char = 'a'; my_char <= 'z'; my_char++)
{
if (my_char == c)
lower = 1;
}

return (lower);
}
