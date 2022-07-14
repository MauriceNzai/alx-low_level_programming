#include <stdio.h>

/**
 * main - Entry point and main block
 *
 * Description: Prints resuts of adding even -valued fibonacci numbers
 *
 * Return: Always (0) (Success)
 */

int main(void)
{
long int n1 = 1;
long int n2 = 2;
long int fn;
long int afn;

fn = afn = 0;

while (fn <= 4000000)
{
fn = n1 + n2;
n1 = n2;
n2 = fn;

if ((n1 % 2) == 0)
{
afn += n1;
}
}

printf("%ld\n", afn);

return (0);

}

