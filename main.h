#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>

int _printf(const char *format, ...);
void check_null(const char *format);
int print_rot(va_list types, char buffer[],
		int flags, int width, int precision, int size);
int print_reverse(va_list types, char buffer[],
                  int flags, int width, int precision, int size);
int print_char(va_list types, char buffer[],
               int flags, int width, int precision, int size);
int print_string(va_list types, char buffer[],
                 int flags, int width, int precision, int size);
int print_percent(va_list types, char buffer[],
		int flags, int width, int precision, int size);
int print_int(va_list types, char buffer[],
              int flags, int width, int precision, int size);
int print_binary(va_list types, char buffer[],
                 int flags, int width, int precision, int size);

#endif /* MAIN_H */
