#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>

#define BUFF_SIZE 1024
#define BUFF_AGAIN -1
int _putchar(char c);
int print_c(va_list arg);
int _printf(const char *format, ...);
void handle_int(int number);

#endif
