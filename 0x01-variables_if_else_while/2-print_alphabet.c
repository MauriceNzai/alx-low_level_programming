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
  char lower = 'a';

  while (lower <= 'z')
    {
      
      putchar(lower);
      lower++;
      putchar('\n');
    }

  return (0);
}
