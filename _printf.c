#include "main.h"

/**
 * _printf - a copy of printf function.
 * @format: char pointer to a word to print.
 * @...: elisipes. the args to be printed
 *
 * Return: count of printed chars
 */
int _printf(const char *format, ...)
{
	va_list ptr;
	int i, count;
	int (*f)(va_list);

	if (format == NULL)
		return (-1);

	va_start(ptr, format);

	i = 0;
	count = 0;

	va_start(ptr, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%' && format[i + 1] != '\0')
		{
			i++;
			f = get_fun(format[i]);
			if (f == NULL)
				count += case_null(format[i]);
			else
				count += f(ptr);
		}
		else if (format[i] == '%' && format[i + 1] == '\0')
		{
			return (-1);
		}
		else
		{
			write(1, &format[i], 1);
			count++;
		}
		i++;
	}
	va_end(ptr);

	return (count);
}
