#include <stdio.h>

/**
 * main - Entry point and the main block
 *
 * This program will print the letters of the alphabet
 * in lowercase except letters q and e
 *
 * You can only use the putchar function
 *
 * Return: 0 Always 0 (Success)
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
