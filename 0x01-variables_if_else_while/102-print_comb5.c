#include <stdio.h>

/**
 * main - Entry point and the main block
 *
 * Description: This program will print 
 * all possible combinations of two two-digit numbers
 *
 * The numbers should range from 0 to 99
 * the two numbers should be seperated by a space
 *
 * All numbers should be printed with two digits e.g 01
 * Combinations must be separated by a comma followed by a space
 * Combinations to be printed in ascending order
 *
 * 00 01 and 01 00 are considered same combination of numbers 0 and 1
 * You can only use the putchar function and only a maximum 8 times
 *
 * You are not allowed to use any variable of type char
 * All your code to be in the main function
 *
 * Return: 0 Always (Success)
 */

int main(void)
{

int x;
int y;
for (x = 0; x <= 98; x++)
{
for (y = x + 1; y <= 99; y++)
{
putchar((x / 10) + '0');
putchar((x % 10) + '0');
putchar(' ');
putchar((y / 10) + '0');
putchar((y % 10) + '0');

if (x == 98 && y == 99)
continue;

putchar(',');
putchar(' ');

}
}

putchar('\n');

return (0);

}
