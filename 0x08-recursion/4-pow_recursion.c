#include "main.h"

/**
 * _pow_recursion - Returns the value of x raised to power of y
 * if y < 0, return -1 to indicate error
 *
 * @x: number to raise
 * @y: number of power
 *
 *Return: x to power y
 */

int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);

else if (y == 0)
return (1);

else
return (x * _pow_recursion(x, y - 1));
}
