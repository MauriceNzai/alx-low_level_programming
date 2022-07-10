#include <stdio.h>

/**
 * main - entry point abd main block
 *
 * Description: This program finds and prints the largest prime factor of
 * the number 612852475143, followed by a new line.
 *
 * Return: 0(success)
 */

int main(void)
{
unsigned long int x;
unsigned long int num;

num = 612852475143;

for (x = 3; x < 12057; x += 2)
{
while (num % x == 0 && num != x)
num /= x;
}
printf("%lu\n", num);

return (0);
}
