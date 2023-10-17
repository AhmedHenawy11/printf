#ifndef MY_HEADER_H
#define MY_HEADER_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>

int _printf(const char *format, ...);
int _putchar(char c);
int _print_character(va_list arg);
int _print_str(va_list arg);
int _print_perc_(va_list __attribute__((unused)) arg);
int _print_integer(va_list arg);

/**
 * s - structure specification
 * @ch: member_1
 * @func: member_2
 * @s_st: s structure alias
 */
typedef struct s
{
	char ch;
	int (*func)(va_list);
}s_struct;

#endif /* MY_HEADER_H */
