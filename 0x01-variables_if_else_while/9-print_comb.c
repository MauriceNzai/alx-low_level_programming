#include <stdio.h>

/**
 * main - main entry point and the main block
 *
 * Description: Print all possible combinations of single digit number
 * The number shall be seperated by commas and followed by a space
 *
 * only putchar function is to be used and a maximun 4 times
 * No variable of type char is to be used
 *
 * Return: 0 (Success)
 */

int main(void)
{
int x;

for (x = '0'; x <= '9'; x++)
{
putchar(x);
if (x != '9')
{
putchar(',');
putchar(' ');
}
}
putchar('\n');

return (0);
}
