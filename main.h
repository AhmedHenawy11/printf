#ifndef MY_HEADER_H
#define MY_HEADER_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>

<<<<<<< HEAD
=======
#define BUFF_SIZE 1024
#define BUFF_AGAIN -1
int _putchar(char c);
int print_c(va_list arg);
>>>>>>> b6b959c57cb1a908f4c67fe973216c79f9c33935
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
