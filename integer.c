#include "main.h"

void handle_int(int number)
{
	int n;

	if (number == 0)
		return;

	n = number / 10;

	handle_int(n);
	_putchar(number % 10 + '0');

	return;
}
