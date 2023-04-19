#include "function_pointers.h"
#include "stdlib.h"

/**
 *print_name - calling functions to print a name
 *@name: a pointer
 *@f: a function
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
	{
		return;
	}
	(*f)(name);
}

