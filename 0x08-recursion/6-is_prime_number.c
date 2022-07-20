#include "main.h"

/**
 * is_prime_number - Returns 1 if iput integer is prime number, otherwise 0
 *
 * @n: Integer input
 *
 * Return: 1 if prime number 0 otherwise
 */

int is_prime_number(int n)
{
if (n == 0)
return (0);

if (n < 0)
return (0);

if (n == 1)
return (0);

return (is_divisible(n, divisible));
}

/**
 * is_divisible - Tests for divisibility by 2
 *
 * @num: The number to be checked for divisibility
 * @divisible: The result of the test
 *
 * Return: 1 if num is divisible or 0 otherwise
 */

int is_divisible(int num, int divisible)
{
if (num % divisible == 0)
return (0);

if (divisible == num / 2)
return (1);

return (is_divisible(num, divisible + 1));
}
