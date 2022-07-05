#include <stdio.h>

#include <stdlib.h>

#include <time.h>

/**
 * main - Entry point and main block
 *
 * Description: This program will determine whether a randomly generated number
 * The output of the program should be,
 * The number, followed by is positive, if the number is Positive
 * The number, followed by is zero, if the number is Zero
 * The number, followed by is negative,if the number is Negative
 *
 * return: 0 (Success)
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
