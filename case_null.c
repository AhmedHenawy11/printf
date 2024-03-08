#include "main.h"

/**
 * null_case - deals with instances where function pointer points to null
 * @ch: the char being passed
 *
 * Return: a count
 */
int case_null(char ch)
{
	char aft_pct  = '%';

	if (ch == '%')
	{
		write(1, &ch, 1);
		return (1);
	}
	else if (ch == ' ')
	{
		write(1, &ch, 1);
		return (1);
	}
	else if (ch == '\n')
	{
		write(1, &aft_pct, 1);
		write(1, &ch, 1);
		return (2);
	}
	else
	{
		write(1, &aft_pct, 1);
		write(1, &ch, 1);
		return (2);
	}
	return (0);
}
