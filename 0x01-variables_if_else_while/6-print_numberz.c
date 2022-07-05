#include <stdio.h>

/**
 * main - Entry point and the main block
 *
 * This program print all single digit numbers of base 10
 * starting from 0 and followed by a new line
 *
 * You can only use the putchar function
 *
 * Return: 0 Always (Success)
 */

int main(void)
{
int num;

for (num = '0'; num <= '9'; num++)

putchar(num);
putchar('\n');


return (0);
}
