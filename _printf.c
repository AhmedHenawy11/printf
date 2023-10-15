#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
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
	int n = 0, i = 0, length = 0;
	char c;
	char *str;

	if (format == NULL)
	{
		return (-1);
	}

	va_start(argument, format);

	while (format[length] != '\0')
	{
		if (format[length] != '%')
		{
			write(1, &format[length], 1);
			n++;
		}
		else
		{
			length++;
			switch (format[length])
			{
				case '%':
					write(1, &format[length], 1);
					n++;
					break;
				case 'c':
					c = va_arg(argument, int);
					write(1, &c, 1);
					n++;
					break;
				case 's':
					str = va_arg(argument, char*);

					while (str[i] != '\0')
					{
						i++;
					}
					write(1, str, i);
					n += i;
					break;
			}
		}
		length ++;
	}
	va_end(argument);
	return (n);
}