#include <stdio.h>
/**
 * print_name - function tat prints name
 * @name: the name to be printed
 * @f: the other function to be run
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
