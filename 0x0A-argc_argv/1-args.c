#include <stdio.h>

/**
 * main - Prints the number of argument passed to it followed by a new line
 *
 * @argc: The number of arguments
 * @argv: Array of strings that holds values of the arguments passed
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{

if (argc)
{
printf("%d\n", argc - 1);
(void)argv;
}

return (0);
}
