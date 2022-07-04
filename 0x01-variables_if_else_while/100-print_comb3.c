#include <stdio.h>

/**
 * main - Entry point and the main block
 * Description: Print all possible combinations of two digits
 * The two digits must be differnt
 * 01 and 10 are considered the same combination of 0 and 1
 * print only the smallest combination of the two digits
 * Numbers should be printed in ascending order, with two digits
 * You can only use the putchar function and a maximun 5 times
 * You are not allowed to use any variable of type char
 * All your code should be in the main function
 *
 * Return: 0 (Success)
 */

int main(void)
{
int x;
int y;

for (x = '0'; x < '9'; x++)
{
for (y = x + 1; y <= '9'; y++)
{
if (x != y)
{
putchar(x);
putchar(y);

if (x == '8' && y == '9')
continue;


putchar(',');
putchar(' ');

}
}
}
putchar('\n');
return (0);
}
