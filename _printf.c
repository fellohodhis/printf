#include "main.h"
<<<<<<< HEAD
#include <stdlib.h>

/**
 * check_for_specifiers - checks if there is a valid format specifier
 * @format: possible format specifier
 *
 * Return: pointer to valid function or NULL
 */
static int (*check_for_specifiers(const char *format))(va_list)
{
	unsigned int i;
	print_t p[] = {
		{"c", print_c},
		{"s", print_s},
		{"i", print_i},
		{"d", print_d},
		{"u", print_u},
		{"b", print_b},
		{"o", print_o},
		{"x", print_x},
		{"X", print_X},
		{"p", print_p},
		{"S", print_S},
		{"r", print_r},
		{"R", print_R},
		{NULL, NULL}
	};

	for (i = 0; p[i].t != NULL; i++)
	{
		if (*(p[i].t) == *format)
		{
			break;
		}
	}
	return (p[i].f);
}

/**
 * _printf - prints anything
 * @format: list of argument types passed to the function
 *
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	unsigned int i = 0, count = 0;
	va_list valist;
	int (*f)(va_list);

	if (format == NULL)
		return (-1);
	va_start(valist, format);
	while (format[i])
	{
		for (; format[i] != '%' && format[i]; i++)
		{
			_putchar(format[i]);
			count++;
		}
		if (!format[i])
			return (count);
		f = check_for_specifiers(&format[i + 1]);
		if (f != NULL)
		{
			count += f(valist);
			i += 2;
			continue;
		}
		if (!format[i + 1])
			return (-1);
		_putchar(format[i]);
		count++;
		if (format[i + 1] == '%')
			i += 2;
		else
			i++;
	}
	va_end(valist);
	return (count);
}
=======

/**
 * _printf - a function that produces output according to a format
 * 
 * @format: format string
 * 
 * Return: number of characters printed (excluding the null byte used to end output to strings)
 */


int _printf(const char *format, ...)
{
	va_list args;
	int i = 0;

	va_start(args, format);
        while (format[i] != '\0')
        {
                if (format[i] == '%')
                {
                        i++;
                        switch (format[i])
                        {
                        case 'c':
                                putchar(va_arg(args, int));
                                break;
                        case 'd':
                                printf("%d", va_arg(args, int));
                                break;
                        case 'f':
                                printf("%f", va_arg(args, double));
                                break;
                        case 's':
                                printf("%s", va_arg(args, char *));
                                break;
                        }
                }
                else
                {
                        putchar(format[i]);
                }
                i++;
        }
        va_end(args);
        return (0);
	
}

/* The code above does the following:
1. The program starts at the beginning of the function.
2.  The while loop gets a character from the format string.
3.  If the character is NOT a %, it just prints the character.
4.  If it IS a %, it begins the switch statement.
5.  The switch statement takes the next character in the format string and
    looks at it.  If the character is a c, d, f, or s, the program knows
    what type of data to expect.
6.  The program uses va_arg() to get the next piece of data from the
    variable argument list.  va_arg() takes two parameters: the list and
    the type of data being passed.
7.  The program then uses printf() to print the data.  The data type
    determines the format string used in the printf() call.
8.  The program continues with the next character in the format string. */
>>>>>>> b45ef1b369d5f6d17aeb95460e4aed4530cbb0d0
