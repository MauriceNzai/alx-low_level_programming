#include <stdio.h>

/**
 * main - Prints all arguments it recieves including the first one
 * each on its own line ending with a new line
 *
 * @argc: Number of arguments
 * @argv: Stores values of arguments
 *
 *Return: Always 0 (success)
 */

int main(int argc, char **argv)
{

while (argc--)
{
printf("%s\n", *argv++);
}

return (0);
}
