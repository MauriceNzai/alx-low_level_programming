#include <stdio.h>

/**
 * main - Prints its name, followed by a new line
 * If executable file renamed, prints the new name
 *
 * @argc: The arguments count
 * @argv: Arguments values
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
int i;

for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}

return (0);
}
