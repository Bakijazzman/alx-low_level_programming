#include <stdio.h>
/**
*     main- printing into the standard error
*	and that piece of art is useful -dora korpar, 2015-10-19
*
* Return: 1 succesful
*
*/
int main(void)
{
	/*this is the way to print into std error */
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
