#include <stdio.h>

#include <time.h>

#include <stdlib.h>

/**
* main - Entry point and main block
*
* This program will assign a ramdom number
* to the variable n each time it is executed
*
* It will then print the last digit of the number
* stored in the variable n
*
* Return: 0 (Success)
*/

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n % 10 > 5)
printf("Last digit of %d is %d and is greater than 5\n", n, n % 10);

else if (n % 10 == 0)
printf("Last digit of %d is %d and is 0\n", n, n % 10);

else
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n % 10);

/**
 *Return 0 - Exit program
 *
 */
return (0);

}
