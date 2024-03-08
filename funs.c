#include "main.h"

/**
 */
int print_char(va_list ptr)
{
	char ch;

	ch = va_arg(ptr, int);

	write(1, &ch, 1);

	return (1);
}

/**
 * print_str - prints a string
 * @vl: an argument from a variadic argument list
 *
 * Return: the count of characters
 */
int print_str(va_list ptr)
{
	int count;
	char *s;
	int i;
	char *error;

	s = va_arg(ptr, char *);
	error = "(null)";
	count = 0;

	if (s == NULL)
	{
		for (i = 0; error[i] != '\0'; i++)
		{
			write(1, &error[i], 1);
			count++;
		}
	}
	else
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			write(1, &s[i], 1);
			count++;
		}
	}
	return (count);
}

int print_int(va_list ptr)
{
	int n, count, dev;
	char char_put;
	size_t num;

	n = va_arg(ptr, int);
	count = 0;
	dev = 1;

	if (n < 0)
	{
		char_put = '-';
		write(1, &char_put, 1);
		num = (size_t)n * -1;
		count++;
	}
	else
	{
		num = n * 1;
	}

	while ((num / dev) >= 10)
	{
		dev *= 10;
	}

	while (dev > 0)
	{
		char_put = '0' + ((num / dev) % 10);
		write(1, &char_put, 1);
		dev /= 10;
		count++;
	}
		
	return (count);
}
