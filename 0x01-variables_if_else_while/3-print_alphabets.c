#include <stdio.h>

/**
* main - Entry point and the main block
*
* This program print the alphabet in lowercase and uppercase
* followed by a new line
*
* You can only use the putchar function

* Return: 0 Always 0 (Success)
*/

int main(void)
{
char lower;

for (lower = 'a'; lower <= 'z'; lower++)
{
putchar(lower);
}

for (lower = 'A'; lower <= 'Z'; lower++)
{
putchar(lower);
}

putchar('\n');

return (0);
}
