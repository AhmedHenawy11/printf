#include "main.h"
/**
 * _printf - writes the character c to stdout
 * @format: the specifier char that determine the type of data to be printed
 *
 * Return: 
 * On error, -1 is returned.
 */

int _printf(const char *format, ...)
{
    va_list argument;
    int n = 0, c = 0;

    if (format == NULL)
    {
        return (1);
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
                    __putchar(va_arg(argument, int));
                    n++;
                    break;
                case 's':
                    char *str = va_arg(argument, char*);

                    while (str)
                    {
                        c++;
                    }
                    write(1, str, c);
                    n += c;
                    break;
            }
        }
    }format ++;
    va_end(argument);
    return (c);
}
