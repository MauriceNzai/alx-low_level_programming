#include "main.h"

int sqrt_operator(int i, int j);
/**
 * _sqrt_recursion - Returns the natural square root of a number
 * is n does not have a naturalsquare root; return -1
 *
 * @n: The number whose square root we want to return
 *
 * Return: The natural square root of n
 */

int _sqrt_recursion(int n)
{

if (n < 0)
return (-1);

if (n == 0)
return (0);

if (n == 1)
return (1);

return (sqrt_operator(n, 2));
}


/**
 * sqrt_operator - Returns natural square root of a number
 *
 * @i: integer input
 * @j: iterator
 *
 * Return: Square root or -1
 */

int sqrt_operator(int i, int j)
{

if (j % (i / j) == 0)
{

if (j * (i / j) == i)
return (j);

else
return (-1);
}
return (0 + sqrt_operator(i, j + 1));
}
