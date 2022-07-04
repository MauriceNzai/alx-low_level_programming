#include <stdio.h>

/**
 * main - Entry point and  the main block
 *
 * Print all possible combinations of three digits
 * Numbers must be separeated by a comma followed by a space
 * The three digits must be different
 * 012, 120,102,021,201,210 are considered same combinations of 0, 1 and 2
 * You can only use the putchar function and only a maximun 6 times
 * You are not allowed to use any variable of type char
 * All your code to be in the main function
 *
 * Return: 0 (Success)
 */

int main(void)
{

int x;
int y;
int z;

for (x = '0'; x < '9'; x++)
{
for (y = x+1; y <= '9'; y++)
{
  for (z = y+1; z <= '9'; z++)
{
if ((z != x) != y)
{
putchar(x);
putchar(y);
putchar(z);

if (x == '7' && y == '8')
continue;

putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');

return (0);
}
