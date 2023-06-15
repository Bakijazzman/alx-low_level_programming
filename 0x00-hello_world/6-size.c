#include <stdio.h>
/**
 * main - printing sizes of different data type
 * Return: 0 Always Success
 */
int main(void)
{
	printf("Size of a char : %d byte(s)\n", sizeof(char));
	printf("Size of a int : %d byte(s)\n", sizeof(int));
	printf("Size of a long int : %d byte(s)\n", sizeof(long int));
	printf("Size of along long int : %d byte(s)\n", sizeof(long long int));
	printf("Size of a float : %d byte(s)\n", sizeof(float));
	return (0);

}
