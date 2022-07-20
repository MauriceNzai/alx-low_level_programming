#include "main.h"

/**
 * factorial - Returns the factorial of a given number
 *
 * Description: if n < 0, return -1 indicating an error; factorial 0 = 1
 *
 * @n: The number whose factorial we return
 */

int factorial(int n)
{
if (n < 0)
return (-1);

else if (n == 0)
return (1);

else
return (n * factorial(n - 1));
}
