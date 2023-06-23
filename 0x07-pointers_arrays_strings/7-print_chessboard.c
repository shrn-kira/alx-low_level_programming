#include "main.h"

/**
* print_chessboard - function that prints the chessboard
* @a: board to print
*
*  Return: void
*/
void print_chessboard(char (*a)[8])
{
	int i, j;

	i = j = 0;
	while (i < 8)
	{
		j = 0;
		while (j < 8)
		{
			_putchar(a[i][j]);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
