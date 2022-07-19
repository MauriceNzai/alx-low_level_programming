#include "main.h"

/**
 * print_chessboard - Print the chessboard
 *
 * @a: An array input, Rows and Columns of board
 *
 * Return: Nothing
 */

void print_chessboard(char (*a)[8])
{
int i;
int j;

for (i = 0; i < 8; i++)
{
for (j = 0; j < 8; J++)
_putcahr(a[i][j]);

_putchar('\n');
}
}
