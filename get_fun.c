#include "main.h"

/**
 * get_fun - get the required fun to print the arg.
 * @ch: char to get the required fun
 *
 * Return: name of fun
 */

int (*get_fun(char ch))(va_list ptr)
{
	op_t ops[] = {
		{'c', print_char},
		{'s', print_str},
		{'d', print_int},
		{'i', print_int},
		{'\0', NULL}
	};
	int i = 0;

	while (ops[i].c != '\0')
	{
		if (ops[i].c == ch)
			return (ops[i].f);
		i++;
	}

	return (NULL);
}
