#include <stdio.h>

#include <stdlib.h>

/**
 * main - Entry point and main block
 *
 * This program prints the letters
 * of the alphabet in lowercase
 * You can only use the function putchar and only twice
 * All your code should be in the main function
 *
 * Return: 0 Always (Success)
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
