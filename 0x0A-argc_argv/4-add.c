#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Adds positive numbers and prints results followed by a new line
 * Description: If no number is passed to program, print 0 followed by new line
 *
 * @argc: Number of arguments
 * @argv: Holds values of arguments passed
 *
 * Return: 1 if one of arguments contains none digit, 0 success
 */

int main(int argc, char **argv)
{
int num;
int i;
int sum = 0;

while (argc-- > 1)
{

for (i = 0; argv[argc][i]; i++)
{

if (!(isdigit(argv[argc][i])))
{
printf("Error\n");
return (1);
}
}
num = atoi(argv[argc]);
sum = sum+ num;

}
printf("%d\n",sum);
return (0);
}
