#include <stdio.h>

/**
 * main - Entry point and the main block
 *
 * This program prints the alphabet in lowercase
 * and in reverse order followed by a new line
 *
 * You can only use the putchar function

 * Return: 0 (Success)
 */

int main(void)
{
char lower;

for (lower = 'z'; lower >= 'a'; lower--)
{
putchar(lower);
putchar('\n');
}

return (0);
}
