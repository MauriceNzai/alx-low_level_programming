/**
 *Program to determine whethere a randomly generated number
 *is positive
 *is Zero or
 *is Negative
 */
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
 *Determine if numeber is Positive, Zero or Negative
 */

if (n > 0)
  printf("%d is positive\n", n);

else  if (n == 0)
  printf("%d is zero\n", n);

else
printf("%d is negative\n", n);

return (0);
}
