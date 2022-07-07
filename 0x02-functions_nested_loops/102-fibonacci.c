#include <stdio.h>

/**
 * main - Entry point and main block
 *
 * Description: This program prints the first 50 Fibonacci numbers
 * starting with 1 and 2 followed by a new line
 * The numbers must be separated by comma, followed by a space
 *
 * Return: 0 (Success)
 */

int main(void)
{
int x;
long int fibonacci[50];

fibonacci[0] = 1;
fibonacci[1] = 2;

printf("%ld, %ld, ", fibonacci[0], fibonacci[1]);

for (x = 2; x < 50; x++)
{
fibonacci[x] = fibonacci[x - 1] + fibonacci[x - 2];

if (x == 49)
printf("%ld\n", fibonacci[x]);

else
printf("%ld, ", fibonacci[x]);
}

return (0);
}
