#include "main.h"

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