/**
 *This program prints the letters of the aphabet
 *in lowercase except letters q and e
 *Only putchar function is allowed
 */

#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char lower;
char e;
char q;

e = 'e';
q = 'q';

for (lower = 'a'; lower <= 'z'; lower++)
{
if (lower != e && lower != q)
{
putchar(lower);
}
}

putchar('\n');

return (0);
}
