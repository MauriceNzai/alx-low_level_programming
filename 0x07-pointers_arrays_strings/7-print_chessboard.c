#include "main.h"

/**
 * print_chessboard - Print the chessboard
 *
 * @a: An pointer to array input, Rows and Columns of board
 *
 * Return: Nothing
 */

void print_chessboard(char (*a)[8])
{
int i;
int j;

for (i = 0; i < 64; i++)
{
if (i % 8 == 0 && i != 0)
{
j = 1;
_putchar('\n');
}
_putchar(a[i / 8][i - j]);
}

_putchar('\n');
}
