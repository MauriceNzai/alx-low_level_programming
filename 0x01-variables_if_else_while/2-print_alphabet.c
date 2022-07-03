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
  char low;

  for (low = 'a'; low <= 'z'; low++)
    putchar(low);
    putchar('\n');

  return (0);
}
