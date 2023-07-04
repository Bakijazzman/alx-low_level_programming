#include "main.h"
/**
 * print_chessboard - function that prints chessboard
 * @a: array of the chessboard
 */
void print_chessboard(char (*a)[8])
{
	int i = 0, j = 0;

	while (i < 8)
	{
		while (j < 8)
		{
			_putchar(a[i][j] + 0);
			if (j == 7)
			{
				_putchar('\n');
			}
			j++;
		}
		i++;
	}
	return (void);
}
