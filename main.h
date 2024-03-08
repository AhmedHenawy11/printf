#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>
#include <unistd.h>

/**
 * struct opreation - Represents a character-operation mapping
 * @c: The character to match
 * @f: A pointer to the corresponding function
 */

typedef struct opreation
{
	char c;
	int (*f)(va_list);
} op_t;

int _printf(const char *format, ...);
int (*get_fun(char ch))(va_list ptr);
int case_null(char ch);
int print_char(va_list ptr);
int print_str(va_list ptr);
int print_int(va_list ptr);

#endif
