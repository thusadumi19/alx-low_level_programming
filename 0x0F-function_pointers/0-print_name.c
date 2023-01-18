#include "function_pointers.h"

/**
 * print_name - a function that prints a name.
 * @name: the name which is given
 * @f: the function of the name
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
