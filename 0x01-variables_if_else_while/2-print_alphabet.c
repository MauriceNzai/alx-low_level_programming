/**
 *this program prints the letters
 *of the aphabet in lowercase
 */

#include <stdio.h>

#include <stdlib.h>

/**
 *main  -  Entry point
 *
 *Return:  Always  0 (Success)
 */

int main(void)
{
  char lower;

  for (lower = 'a'; lower <= 'z'; lower++)
    {
      
      putchar(lower);
      putchar('\n');
    }

  return (0);
}
