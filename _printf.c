#include "main.h"
/**
 * _printf - function that produces output according to a format
 * and print it to the stunderd output.
 * @format: const char input.
 * Return: the number of characters printed.
 */
int _printf(const char *format, ...)
{
	int length, count, j;
	char ch;
	va_list ptr;

	s_struct s_st[] = {
		{'c', _print_character},
		{'s',  _print_str},
		{'%', _print_perc_},
		{'i', _print_integer},
		{'d', _print_integer},
		{0, NULL}
	};
	count = 0;
	length = 0;

	va_start (ptr, format);
	while (format && format[count])
	{
		ch = format[count];
		if (ch == '%')
		{
			count++;
			ch = format[count];
			j = 0;

			while (s_st[j].ch != 0)
			{
				if (s_st[j].ch == ch)
				{
					length++;
					s_st[j].func(ptr);
					break;
				}
				j++;
			}
			if (s_st[j].ch == 0)
			{
				length++;
				_putchar('%');
				_putchar(ch);
			}
		}
		else
		{
			length++;
			_putchar(ch);
		}
		count++;
	}
	va_end(ptr);

	return (length);
}
