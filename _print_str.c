#include "main.h"
/**
 * _print_str - function that prints a string
 * @arg: va_list input
 * Return: length;
 */
int _print_str(va_list arg)
{
	char *str;
	int i, length;

	str = va_arg(arg, char *);/* set argument to str */

	if (str == NULL)/* check if str = NULL */
		str = "(null)";

	i = 0;
	length = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
		length++;
	}

	return (length);
}
