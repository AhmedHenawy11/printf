#include "main.h"
/**
 * _printf - writes the character to stdout
 * @format: the specifier char that determine the type of data to be printed
 * Description: we make our printf function AHMED @ ALAA
 * Return: number of  characters printed excluding the null byte used to end output to strings.
 * On error, -1 is returned.
 */

int _printf(const char *format, ...)
{
	va_list argument;
	int n = 0, i = 0;

	if (format == NULL)
	{
		return (-1);
	}
	va_start(argument, format);
	while (*format)
	{
		if (*format != "\0")
		{
			_putchar(*format);
			n++;
		}
		else
		{
			switch (*++format)
			{
				case '%':
					_putchar('%');
					n++;
					break;
				case 'd':
					__putchar(va_arg(argument, int));
					n++;
					break;
				case 'c':
					char c = va_arg(argument, int);
					write(1, &c, 1);
					n++;
					break;
				case 's':
					char *str = va_arg(argument, char*);

					while (str)
					{
						i++;
					}
					write(1, str, i);
					n += c;
					break;
			}
		}
	}format ++;
	va_end(argument);
	return (n);
}
