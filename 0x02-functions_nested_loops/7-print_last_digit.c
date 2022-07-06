#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @x: An integer input
 *
 * Return: Value of the last digit
 */

int print_last_digit(int x)
{
int num;

if (x < 0)
num = -1 * (x % 10);
else
num = x % 10;

_putchar((num % 10) + '0');

return (num % 10);

}
