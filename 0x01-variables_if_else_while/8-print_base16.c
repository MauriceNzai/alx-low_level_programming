#include <stdio.h>

/**
 * main - Entry point and main block
 *
 * Description: This program prints all the number of base 16
 * in lowercase and followed by a new line
 *
 * You are only allowed to use the putchar function and only 3 times
 *
 * Return: 0 Always (Success)
 */

int main(void)
{
int n;
char lower;

for (n = '0'; n <= '9'; n++);
{
putchar(n);
}
for (lower = 'a'; lower <= 'f'; lower++)
{
putchar(lower);
putchar('\n');

}
return (0);
}
