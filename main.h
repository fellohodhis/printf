#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>

#define UNUSED(x) (void)(x)
#define BUFF_SIZE 1024

/**
 * struct print - struct for print
 * @type: type of print
 * @f: function to print
 */

typedef struct print
{
        char *type;
        int (*f)(va_list, char *, int, int, int, int);
} print_t;

/*FLAGS*/
#define F_MINUS 1
#define F_PLUS 2
#define F_SPACE 4
#define F_HASH 8
#define F_ZERO 16

/*SIZE*/
#define S_HH 1
#define S_H 2
#define S_L 4


int _printf(const char *format, ...);
int handle_print(const char *format, int *i, va_list list, char buffer[],
                int flags, int width, int precision, int size);

int get_flags(const char *format, int *i);
int get_width(const char *format, int *i, va_list list);
int get_precision(const char *format, int *i, va_list list);
int get_size(const char *format, int *i);

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
