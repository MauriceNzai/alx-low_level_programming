#include <stdio.h>

#include <stdlib.h>

#include <time.h>

/**
 *main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
  
{
  
  int n;
  

  
  srand(time(0));
  
  n = rand() - RAND_MAX / 2;
  
/**
   *Tells if rndom generated number is positive, negative or zero
*/
  if (n > 0)
    {
      printf(" is positive\n");
    }
  else if (n < 0)
    {
      printf(" is negative\n");
    }
  else
    {
      printf(" is zero\n");
    }
  return (0);
  
}