#include <stdio.h>

/**
 * main - Entry point and main block
 *
 * Description: Finds and prints the 1st 98 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line
 * Numbersare separated by comma followed by a space
 * No use of long long, malloc, pointers, arrays/tables or structures
 * No hard-coding of Fibonacci numbers except 1 and 2
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int c;
int bool1;
int bool2;
long int n1;
long int n2;
long int fn1;
long int fn2;
long int n11;
long int n22;

n1 = 1;
n2 = 2;
bool1 = bool2 = 1;

printf("%ld, %ld", n1, n2);

for (c = 0; c < 96; c++)
{
if (bool1)
{
fn1 = n1 + n2;
printf(", %ld", fn1);
n1 = n2;
n2 = fn1;
}

else
{

if (bool2)

{

n11 = n1 % 1000000000;

n22 = n2 % 1000000000;

n1 = n1 / 1000000000;

n2 = n2 / 1000000000;

bool2 = 0;

}

fn2 = (n11 + n22);

fn1 = n1 + n2 + (fn2 / 1000000000);

printf(", %ld", fn1);

printf("%ld", fn2 % 1000000000);

n1 = n2;
n11 = n22;
n2 = fn1;

n22 = (fn2 % 1000000000);

}

if (((n1 + n2) < 0) && bool1 == 1)
bool1 = 0;

}

printf("\n");

return (0);

}
