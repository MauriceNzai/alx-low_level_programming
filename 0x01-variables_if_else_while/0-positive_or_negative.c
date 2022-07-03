#include <stdio.h>

#include <stdlib.h>

#include <time.h>

/**
 *main - Entry point
 *
 * Return: Always 0 (Success)
 */
int mmain(void)
{
  int n;
  srand(time(0));
  n = rand() - RAND_MAX /2;
  /**
   *Determine if numeber is Positive, Zero or Negative
   */
  if (n > 0)
    {
      pringtf("%d is positive\n", n);
    }
  if (n = 0)
    {
      printf("%d is zero\n", n);
    }
  else
    {
      printf("%d is negative\n" n);
    }
  return (0);
}
