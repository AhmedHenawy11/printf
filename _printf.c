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
					_putchar(format[length]);
					n++;
					break;
				case 'c':
					_putchar(va_arg(argument, int));
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
				case ' ':
				    return (-1);
                default:
                    _putchar('%');
                    _putchar(format[length]);
                    n += 1;
                    break;
            }
			
		}
		length ++;
	}
	va_end(argument);
	return (n);
}
