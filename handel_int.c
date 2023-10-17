#include "main.h"
/**
 *  _print_integer - function that prints integer
 * @arg: va_list input
 * Return: length ==> number of character printed
 */
int _print_integer(va_list arg)
{
	int get_num, calc, length;
	unsigned int number;

	get_num = va_arg(arg, int);

	calc = 1;
	length = 0;

	if (get_num < 0)
	{
		length++;
		number = get_num * -1;
	}
	else
		number = get_num;

	while (number / calc > 9)
	{
		calc *= 10;
	}

	while (calc != 0)
	{
		length++;
		_putchar(number / calc + '0');
		number %= calc;
		calc /= 10;
	}

	return (length);
}
