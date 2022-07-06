#include "main.h"

/**
 * _isalpha - See description
 *
 * @c: An input character
 *
 * Description: Checks for alphabetic character
 *
 * Return: 1 if c is a letter, lowercase or uppercase and 0 otherwise
 */

int _isalpha(int c)
{
char lower;
char upper;
int isletter;

isletter = 0;

for (lower = 'a'; lower <= 'z'; lower++)
{
for (upper = 'A'; upper <= 'Z'; upper++)
{
if (c == lower || c == upper)
isletter = 1;
}
}
return (isletter);
}
