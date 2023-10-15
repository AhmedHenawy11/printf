#include "main.h"

/**
 * _printf - my printf function
 *
 * @format: the string should print
 * Return: an intager
 */
int _printf(const char *format, ...)
{
int j = 0, count = 0;
va_list list;

if (format == NULL)
{
return (-1);
}

va_start(list, format);

while (format[j] != '\0')
{
if (format[j] != '%')
{
write(1, &format[j], 1);
count++;
}
else
{
j++;
if (format[j] == '%')
{
write(1, &format[j], 1);
count++;
}
else if (format[j] == 'c')
{
char c = va_arg(list, int);
write(1, &c, 1);
count++;
}
else if (format[j] == 's')
{
int i = 0;
char *string = va_arg(list, char*);

while (string[i] != '\0')
{
i++;
}

write(1, string, i);
count += i;
}
}
j++;
}
va_end(list);
return (count);
}