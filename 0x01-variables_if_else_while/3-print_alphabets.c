/**
*his program will print the alphabet
*in lowercase and uppercase
*followed by a neline
*using the putchar function
*/

#include <stdio.h>

/**
* main - Entry point
*
* return: Always 0 (Success)
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
