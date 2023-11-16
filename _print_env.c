#include "main.h"

/**
 *_print_env - Function that print enviromental variables
 * Return: void;
 **/

void _print_env(void)
{
	char **env = environ;

	while (*env != NULL)
	{
		_print(*env);
		_print("\n");
		env++;
	}

}
