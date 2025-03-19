#include "function_pointers.h"

/**
 * print_name - Prints words
 * @name: the name that it prints
 * @f: The pointer to fucntion
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
