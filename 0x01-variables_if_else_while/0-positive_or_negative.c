#include <stdio.h>

#include <stdlib.h>

#include <time.h>

/**
 * main - Entry point and main block
 *
 * Program to determine whether a randomly generated number
 * is Positive
 * is Zero
 * is Negative
 *
 * Return: 0 (Success)
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
