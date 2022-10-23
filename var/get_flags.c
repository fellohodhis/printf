#include "main.h"

/**
 * get_flags - calculates active flags
 * 
 * @format: the format
 * 
 * @i: the index
 * 
 * Return: the flags
 */

int get_flags(const char *format, int *i)
{
        int flags = 0;

        while (format[*i] == '+' || format[*i] == ' ' || format[*i] == '#'
                        || format[*i] == '-' || format[*i] == '0')
        {
                if (format[*i] == '+')
                        flags |= 1;
                else if (format[*i] == ' ')
                        flags |= 2;
                else if (format[*i] == '#')
                        flags |= 4;
                else if (format[*i] == '-')
                        flags |= 8;
                else if (format[*i] == '0')
                        flags |= 16;
                ++(*i);
        }
        return (flags);
}