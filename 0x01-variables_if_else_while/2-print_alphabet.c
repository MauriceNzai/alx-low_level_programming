#include <stdio.h>

#include <stdlib.h>

/**
 * main  -  Entry point and main block
 *
 * This program prints the letters
 * of the alphabet in lowercase
 *
 * Return:  Always  0 (Success)
 */

int main(void)
{
char lower = 'a';

while (lower <= 'z')
{
putchar(lower);
lower++;
putchar('\n');
}

return (0);
}
