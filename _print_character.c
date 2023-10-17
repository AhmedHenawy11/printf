#include "main.h"
/**
 * _print_character: function that prints a char argument.
 * @args: va_list argument input
 * Return: num
 */
int _print_character(va_list arg)
{
	char ch;

	ch = va_arg(arg, int);
	_putchar(ch);

	return (1);
}

