#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two numbers and prints results followed by a new line
 *
 * @argc: Numbers of arguments
 * @argv: Holds arguments values
 *
 * Return: 0 (Success) or 1 if does not receives 2 arguments
 */

int main(int argc, char **argv)
{
int num_1;
int num_2;
int result;

if (argc != 3)
{
printf("Error\n");
return (1);
}

else
{
num_1 = atoi(argv[1]);
num_2 = atoi(argv[2]);
result = num_1 * num_2;

printf("%d\n", result);
return (0);
}
}
