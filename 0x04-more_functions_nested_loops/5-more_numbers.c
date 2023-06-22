#include <stdio.h>
/**
 * more_numbers - prints 10 times the numbers
 * from 0 to 14
 * Return: nothing
 */
void main(void)
{
        int i, j;

        for (i = 0; i < 10; i++)
        {
                for (j = 0; j < 15 ; j++)
                {
                    if (j >= 10)
                   /* {
                         putchar(j + '0');
                    }
                    else
                    {*/
                        putchar(j / 10 + '0');
                        putchar(j % 10 + '0');
                }
                putchar('\n');
        }
}
